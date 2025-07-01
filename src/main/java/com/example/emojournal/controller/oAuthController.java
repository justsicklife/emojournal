package com.example.emojournal.controller;

import com.example.emojournal.auth.token.AuthTokens;
import com.example.emojournal.auth.dto.GoogleLoginParams;
import com.example.emojournal.dto.AuthorizationCodeRequest;
import com.example.emojournal.service.OAuthLoginService;
import lombok.RequiredArgsConstructor;
import lombok.extern.slf4j.Slf4j;
import org.springframework.http.HttpHeaders;
import org.springframework.http.ResponseCookie;
import org.springframework.http.ResponseEntity;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.*;

import java.time.Duration;
import java.util.Map;

@Slf4j
@Controller
@RequiredArgsConstructor
@RequestMapping("/login/oauth2/code")
public class OAuthController {

    private final OAuthLoginService oAuthLoginService;

    @PostMapping("/google")
    public ResponseEntity<?> loginGoogle(@RequestBody AuthorizationCodeRequest codeRequest) {

        // 바디에 있는 params 를 받음
        // params 에는 authorizationCode 가 있음
        // 구글 소셜로그인으로 로그인 하는 메서드

        GoogleLoginParams params = new GoogleLoginParams();
        params.setAuthorizationCode(codeRequest.getCode());

        AuthTokens authTokens = oAuthLoginService.login(params);

        String accessToken = authTokens.getAccessToken();
        String refreshToken = authTokens.getRefreshToken();

        ResponseCookie refreshTokenCookie = ResponseCookie.from("refreshToken", refreshToken)
                .httpOnly(true) // 자바스크립트에서 접근불가
                .secure(false) // HTTPS 일때만 전송됨
                .path("/auth/reissue") // /auth/reissue 요청할 때만 쿠키 자동 포함됨
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