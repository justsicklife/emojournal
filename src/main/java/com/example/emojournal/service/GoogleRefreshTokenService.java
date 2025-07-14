package com.example.emojournal.service;

import com.example.emojournal.domain.GoogleRefreshToken;
import com.example.emojournal.repository.GoogleRefreshTokenRepository;
import lombok.RequiredArgsConstructor;
import org.springframework.stereotype.Service;

@Service
@RequiredArgsConstructor
public class GoogleRefreshTokenService {

    private final GoogleRefreshTokenRepository googleRefreshTokenRepository;

    public Long save(GoogleRefreshToken googleRefreshToken) {
        return googleRefreshTokenRepository.save(googleRefreshToken).getId();
    }
}
