package com.example.emojournal.controller;

import com.example.emojournal.auth.token.AuthTokenGenerator;
import com.example.emojournal.auth.token.AuthTokens;
import com.example.emojournal.domain.RefreshToken;
import com.example.emojournal.repository.RefreshTokenRepository;
import com.example.emojournal.service.RefreshTokenService;
import com.example.emojournal.service.TokenReissueService;
import lombok.RequiredArgsConstructor;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.CookieValue;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RestController;

import java.util.Map;
import java.util.NoSuchElementException;
import java.util.Optional;

@RestController
@RequiredArgsConstructor
public class RefreshTokenController {

    private final TokenReissueService tokenReissueService;

    // access token 이 만료되서 refresh token 이 있는지 확인하고 access token 을 재발급 하는 메서드
    @PostMapping("/auth/reissue")
    public ResponseEntity<?> reissueAccessToken(@CookieValue(name = "refreshToken") String refreshTokenCookie) {

        AuthTokens authTokens = tokenReissueService.reissueAccessToken(refreshTokenCookie).orElseThrow(NoSuchElementException::new);

        return ResponseEntity.ok()
                .body(Map.of(
                        "accessToken",authTokens.getAccessToken(),
                        "tokenType",authTokens.getGrantType(),
                        "expiresIn",authTokens.getExpiresIn()
                ));
    }

}
