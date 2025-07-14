package com.example.emojournal.domain;

import jakarta.persistence.*;
import lombok.*;

import java.time.LocalDateTime;

@Entity
@Getter
@Setter
@NoArgsConstructor
@AllArgsConstructor
@Builder
@Table(name = "google_refresh_token")
public class GoogleRefreshToken {

    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    @Column(name = "google_refresh_token_id")
    private Long id;

    @ManyToOne(fetch = FetchType.LAZY)
    @JoinColumn(name = "member_id",nullable = false)
    private Member member;

    @Column(name = "refresh_token",nullable = false,length = 2048)
    private String refreshToken;

    @Column(name = "issued_at",nullable = false)
    private LocalDateTime issuedAt;

    @Column(name = "revoked",nullable = false)
    private boolean revoked = false;

    public static GoogleRefreshToken create(Member member,String refreshToken) {
        GoogleRefreshToken googleRefreshToken = new GoogleRefreshToken();
        googleRefreshToken.setMember(member);
        googleRefreshToken.setRefreshToken(refreshToken);
        googleRefreshToken.setIssuedAt(LocalDateTime.now());
        return googleRefreshToken;
    }
}
