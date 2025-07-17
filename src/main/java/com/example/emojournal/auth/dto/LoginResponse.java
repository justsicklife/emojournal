package com.example.emojournal.auth.dto;

import lombok.AllArgsConstructor;
import lombok.Getter;

@Getter
@AllArgsConstructor
public class LoginResponse {
    private Long memberId;
    private AuthTokens authTokens;
    private OAuthTokens oAuthTokens;
}