package com.example.emojournal.service;

import com.example.emojournal.auth.token.AuthTokenGenerator;
import com.example.emojournal.auth.token.AuthTokens;
import com.example.emojournal.auth.token.JwtTokenProvider;
import com.example.emojournal.domain.RefreshToken;
import com.example.emojournal.repository.RefreshTokenRepository;
import lombok.RequiredArgsConstructor;
import lombok.extern.slf4j.Slf4j;
import org.springframework.stereotype.Service;

import java.util.NoSuchElementException;
import java.util.Optional;

// 리프레시 토큰을 받아서 memberId 추출 → access token 재발급 흐름 담당
@Slf4j
@Service
@RequiredArgsConstructor
public class TokenReissueService {

    private final AuthTokenGenerator authTokenGenerator;

    private final RefreshTokenRepository refreshTokenRepository;

    private final JwtTokenProvider jwtTokenProvider;

    public Optional<AuthTokens> reissueAccessToken(String refreshToken) {
        log.info("refresh Token : " + refreshToken);
        Long memberId = jwtTokenProvider.extractMemberId(refreshToken);
        RefreshToken dbRefreshToken = refreshTokenRepository.findByRefreshToken(refreshToken).orElseThrow(NoSuchElementException::new);

        if(dbRefreshToken.getMember().getId().equals(memberId)) {
            return Optional.of(authTokenGenerator.generate(memberId));
        }

        return Optional.empty();
    }

}
