package com.example.emojournal.service;

import com.example.emojournal.auth.client.RequestOAuthInfoService;
import com.example.emojournal.auth.dto.LoginResponse;
import com.example.emojournal.auth.dto.OAuthInfoResponse;
import com.example.emojournal.auth.dto.OAuthLoginParams;
import com.example.emojournal.auth.token.AuthTokenGenerator;
import com.example.emojournal.auth.token.AuthTokens;
import com.example.emojournal.domain.Member;
import com.example.emojournal.repository.MemberRepository;
import lombok.RequiredArgsConstructor;
import org.springframework.stereotype.Service;

@Service
@RequiredArgsConstructor
public class OAuthLoginService {

    private final MemberRepository memberRepository;
    private final AuthTokenGenerator authTokenGenerator;
    private final RequestOAuthInfoService requestOAuthInfoService;

    public LoginResponse login(OAuthLoginParams params) {
        // 사용자 정보를 dto 로 가져옴
        OAuthInfoResponse oAuthInfoResponse = requestOAuthInfoService.request(params);
        // 가져온 정보 dto 를 가지고 db 에서 정보를 찾거나 or 만들어줌
        Long memberId = findOrCreateMember(oAuthInfoResponse);

        AuthTokens authTokens = authTokenGenerator.generate(memberId);

        // jwt 토큰을 만드는 메서드
        return new LoginResponse(memberId, authTokens);
    }

    // 매게변수로 oauth 정보를 받음
    private Long findOrCreateMember(OAuthInfoResponse oAuthInfoResponse) {
        // 찾는 email 이 없다면 profile 을 생성하고
        // 있다면 유저 id 를 가져옴
        // 둘다 마지막에 id 를 가져오는 건 똑같음
        return memberRepository.findByEmail(oAuthInfoResponse.getEmail())
                .map(Member::getId)
                .orElseGet(() -> newMember(oAuthInfoResponse));
    }

    private Long newMember(OAuthInfoResponse oAuthInfoResponse) {
        Member member = Member.builder()
                .email(oAuthInfoResponse.getEmail())
                .nickname(oAuthInfoResponse.getNickname())
                .oAuthProvider(oAuthInfoResponse.getOAuthProvider())
                .build();

        return memberRepository.save(member).getId();
    }

}
