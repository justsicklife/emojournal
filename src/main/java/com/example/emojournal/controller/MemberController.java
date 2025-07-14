package com.example.emojournal.controller;

import com.example.emojournal.domain.Member;
import com.example.emojournal.dto.MemberResponseDto;
import com.example.emojournal.service.MemberService;
import jakarta.servlet.http.HttpServletRequest;
import lombok.RequiredArgsConstructor;
import lombok.extern.slf4j.Slf4j;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;

@Slf4j
@RestController
@RequiredArgsConstructor
public class MemberController {

    private final MemberService memberService;

    @GetMapping("/member")
    public MemberResponseDto showMember(HttpServletRequest request) {

        Long memberId = (Long)request.getAttribute("memberId");


        return Member.fromEntity(memberService.findMemberById(memberId));
    }
}
