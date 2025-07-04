package com.example.emojournal.auth.dto;

import com.example.emojournal.domain.item.OAuthProvider;
import org.springframework.util.MultiValueMap;

public interface OAuthLoginParams {
    OAuthProvider oAuthProvider();
    MultiValueMap<String,String> makeBody();
}
