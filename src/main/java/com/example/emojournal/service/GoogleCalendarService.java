package com.example.emojournal.service;


import com.example.emojournal.calendar.GoogleCalendarClient;
import com.example.emojournal.calendar.dto.GoogleCalendarEventListResponse;
import com.example.emojournal.crypto.CryptoUtil;
import com.example.emojournal.domain.GoogleToken;
import com.example.emojournal.domain.Member;
import com.example.emojournal.repository.GoogleTokenRepository;
import com.example.emojournal.repository.MemberRepository;
import lombok.RequiredArgsConstructor;
import org.springframework.stereotype.Service;

import java.time.Instant;
import java.time.LocalDateTime;
import java.time.ZoneId;
import java.time.ZonedDateTime;
import java.util.NoSuchElementException;
import java.util.Optional;

@Service
@RequiredArgsConstructor
public class GoogleCalendarService {
    private final GoogleCalendarClient googleCalendarClient;

    private final GoogleTokenRepository googleTokenRepository;

    private final MemberRepository memberRepository;

    private final CryptoUtil cryptoUtil;


    public GoogleCalendarEventListResponse fetchCalendar(Long memberId,String timeMin,String timeMax) throws Exception {

        Member member = memberRepository.findById(memberId).orElseThrow(NoSuchElementException::new);

        GoogleToken googleToken = googleTokenRepository.findByMember(member).orElseThrow(NoSuchElementException::new);

        String accessToken = cryptoUtil.decrypt(googleToken.getAccessToken());

        return googleCalendarClient.getCalendarEvents(accessToken, toUtcString(timeMin), toUtcString(timeMax));
    }

    private String toUtcString(String time) {
        LocalDateTime localDateTime = LocalDateTime.parse(time);

        ZonedDateTime zonedDateTime = localDateTime.atZone(ZoneId.of("Asia/Seoul"));

        Instant utcInstant  = zonedDateTime.toInstant();

        return utcInstant.toString();
    }

}
