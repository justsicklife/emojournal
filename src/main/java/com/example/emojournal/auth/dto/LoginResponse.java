package com.example.emojournal.auth.dto;

import com.example.emojournal.auth.token.AuthTokens;
import lombok.AllArgsConstructor;
import lombok.Getter;

@Getter
@AllArgsConstructor
public class LoginResponse {
    private Long memberId;
    private AuthTokens tokens;
}