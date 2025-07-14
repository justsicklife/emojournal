package com.example.emojournal.auth.token;


import lombok.Getter;
import org.springframework.stereotype.Component;

import java.time.Instant;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.ConcurrentMap;

@Component
public class AccessTokenCache {

//    private static class TokenInfo {
//        @Getter
//        private final String accessToken;
//        private final Instant expiresAt;
//
//        public TokenInfo(String accessToken, long expiresInSeconds) {
//            this.accessToken = accessToken;
//            this.expiresAt = Instant.now().plusSeconds(expiresInSeconds - 60);
//        }
//
//        public boolean isExpired() {
//            return Instant.now().isAfter(expiresAt);
//        }
//    }
//
//    private final Map<Long,TokenInfo> tokenMap = new ConcurrentHashMap<>();
//
//    public void save(Long memberId,String accessToken, long expiresInSeconds) {
//        tokenMap.put(memberId,new TokenInfo(accessToken, expiresInSeconds));
//    }
//
//    public String get(Long memberId) {
//        TokenInfo tokenInfo = tokenMap.get(memberId);
//
//    }

}
