package com.example.emojournal.auth.token;

import lombok.AllArgsConstructor;
import lombok.Getter;
import lombok.NoArgsConstructor;
import lombok.Setter;

@Getter
@Setter
@AllArgsConstructor
@NoArgsConstructor
public class AuthTokens {

    private String accessToken;
    private String refreshToken;
    private String grantType;
    private Long expiresIn;

    public static AuthTokens of(String accessToken,String refreshToken,String grantType,Long expiresIn) {
        return new AuthTokens(accessToken,refreshToken,grantType,expiresIn);
    }

}
