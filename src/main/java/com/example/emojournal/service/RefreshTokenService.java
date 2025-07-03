package com.example.emojournal.service;

import com.example.emojournal.domain.RefreshToken;
import com.example.emojournal.repository.RefreshTokenRepository;
import lombok.RequiredArgsConstructor;
import org.springframework.stereotype.Service;


// DB 저장, 만료 확인, 삭제, 조회 등 refresh token 자체 관리 전담
@Service
@RequiredArgsConstructor
public class RefreshTokenService {

    private final RefreshTokenRepository refreshTokenRepository;

    public Long saveRefreshToken(RefreshToken refreshToken) {
        return refreshTokenRepository.save(refreshToken).getId();
    }

}
