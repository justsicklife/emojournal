package com.example.emojournal.controller;

import com.example.emojournal.auth.token.AuthTokenGenerator;
import lombok.RequiredArgsConstructor;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.CookieValue;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
@RequiredArgsConstructor
public class RefreshTokenController {

    private final AuthTokenGenerator authTokenGenerator;

    // access token 이 만료되서 refresh token 이 있는지 확인하고 access token 을 재발급 하는 메서드
    @PostMapping("/auth/reissue")
    public ResponseEntity<?> reissueAccessToken(@CookieValue(name = "refreshToken") String refreshToken) {

        // 할일
        // 1. 클라이언트에서 보낸 리프레쉬 토큰을 받음
        Long memberId = authTokenGenerator.extractMemberId(refreshToken);




        // 2. db 에있는 refresh token 과 비교
        // 3. 같다면 access token 발급
        // 다만 리프레쉬 토큰을 유효시간은 그대로



        return null;
    }

}
