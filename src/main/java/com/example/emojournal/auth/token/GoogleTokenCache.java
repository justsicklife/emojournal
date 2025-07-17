package com.example.emojournal.auth.token;

import com.example.emojournal.dto.GoogleTokenInfo;
import org.springframework.stereotype.Component;

import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

@Component
public class GoogleTokenCache {

    private final Map<Long, GoogleTokenInfo> tokenMap = new ConcurrentHashMap<>();

    public void save(Long memberId,GoogleTokenInfo tokenInfo){
        tokenMap.put(memberId,tokenInfo);
    }

    public GoogleTokenInfo get(Long memberId) {
        return tokenMap.get(memberId);
    }

    public void remove(Long memberId) {
        tokenMap.remove(memberId);
    }

    public void clear() {
        tokenMap.clear();
    }

    public boolean contains(Long memberId) {
        return tokenMap.containsKey(memberId);
    }

}
