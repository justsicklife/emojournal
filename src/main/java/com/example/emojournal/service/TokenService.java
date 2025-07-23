package com.example.emojournal.service;

import com.example.emojournal.auth.token.JwtTokenProvider;
import lombok.RequiredArgsConstructor;
import org.springframework.stereotype.Service;

@Service
@RequiredArgsConstructor
public class TokenService {

    private final JwtTokenProvider jwtTokenProvider;

    public boolean validateToken(String token) {
        return jwtTokenProvider.validateToken(token);
    }

}
