package com.example.emojournal.controller;

import com.example.emojournal.auth.dto.LoginResponse;
import com.example.emojournal.auth.token.AuthTokens;
import com.example.emojournal.auth.dto.GoogleLoginParams;
import com.example.emojournal.domain.GoogleRefreshToken;
import com.example.emojournal.domain.Member;
import com.example.emojournal.domain.RefreshToken;
import com.example.emojournal.dto.AuthorizationCodeRequest;
import com.example.emojournal.service.GoogleRefreshTokenService;
import com.example.emojournal.service.MemberService;
import com.example.emojournal.service.OAuthLoginService;
import com.example.emojournal.service.RefreshTokenService;
import lombok.RequiredArgsConstructor;
import lombok.extern.slf4j.Slf4j;
import org.springframework.http.HttpHeaders;
import org.springframework.http.ResponseCookie;
import org.springframework.http.ResponseEntity;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.*;

import java.time.Duration;
import java.time.Instant;
import java.time.LocalDateTime;
import java.time.ZoneId;
import java.util.Map;
import java.util.UUID;

@Slf4j
@RestController
@RequiredArgsConstructor
@RequestMapping("/login/oauth2/code")
public class OAuthController {

    private final OAuthLoginService oAuthLoginService;

    private final RefreshTokenService refreshTokenService;

    private final MemberService memberService;

    private final GoogleRefreshTokenService googleRefreshTokenService;

    @PostMapping("/google")
    public ResponseEntity<?> loginGoogle(@RequestBody AuthorizationCodeRequest codeRequest) {

        // authorization code 를 넣어줌
        GoogleLoginParams params = new GoogleLoginParams();
        params.setAuthorizationCode(codeRequest.getCode());

        // 받은 code 를 매게변수로 넘겨주고
        // 토큰 객체, memberId 를 받아옴
        LoginResponse loginResponse = oAuthLoginService.login(params);
        AuthTokens authTokens = loginResponse.getTokens();


        String accessToken = authTokens.getAccessToken();

        // 구글 서버에서 준 refresh token
        String googleRefreshToken = authTokens.getRefreshToken();

        // 스프링 서버에서 만드는 refresh token
        String refreshToken = UUID.randomUUID().toString();

        // memberId 로 member 를찾아야됨
        Member member = memberService.findMemberById(loginResponse.getMemberId());

        GoogleRefreshToken googleRefreshTokenEntity = GoogleRefreshToken.create(member, googleRefreshToken);

        googleRefreshTokenService.save(googleRefreshTokenEntity);


        refreshTokenService.saveRefreshToken(RefreshToken.create(refreshToken, LocalDateTime.now().plusWeeks(1),member));

        ResponseCookie refreshTokenCookie = ResponseCookie.from("refreshToken", refreshToken)
                .httpOnly(true) // 자바스크립트에서 접근불가
                .secure(false) // HTTPS 일때만 전송됨
                .path("/auth") // /auth 요청할 때만 쿠키 자동 포함됨
                .maxAge(Duration.ofDays(7)) // 쿠키 만료 시간 7일
                .sameSite("Lax") // 외부 사이트 요청 시 쿠키가 전송되지 않게 하는 코드
                .build();

        return ResponseEntity.ok()
                .header(HttpHeaders.SET_COOKIE,refreshTokenCookie.toString())
                .body(Map.of(
                        "accessToken",accessToken,
                        "tokenType", authTokens.getGrantType(),
                        "expiresIn",authTokens.getExpiresIn()
                ));
    }

}