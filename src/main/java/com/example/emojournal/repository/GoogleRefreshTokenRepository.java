package com.example.emojournal.repository;

import com.example.emojournal.domain.GoogleRefreshToken;
import org.springframework.data.jpa.repository.JpaRepository;

public  interface GoogleRefreshTokenRepository extends JpaRepository<GoogleRefreshToken,Long> {
}
