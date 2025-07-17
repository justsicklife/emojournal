package com.example.emojournal.dto;

import com.fasterxml.jackson.annotation.JsonAnySetter;
import lombok.*;

import java.time.LocalDateTime;

@Getter
@Setter
@AllArgsConstructor
@NoArgsConstructor
@Builder
@ToString
public class GoogleTokenInfo {

    private String accessToken;
    private String refreshToken;
    private long expiresIn;
    private LocalDateTime issuedAt;

}
