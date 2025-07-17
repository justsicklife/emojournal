package com.example.emojournal.service;


import com.example.emojournal.auth.token.GoogleTokenCache;
import com.example.emojournal.calendar.GoogleCalendarClient;
import com.example.emojournal.calendar.dto.GoogleCalendarEventListResponse;
import com.example.emojournal.dto.GoogleTokenInfo;
import lombok.RequiredArgsConstructor;
import org.springframework.stereotype.Service;

import java.time.Instant;
import java.time.LocalDateTime;
import java.time.ZoneId;
import java.time.ZonedDateTime;

@Service
@RequiredArgsConstructor
public class GoogleCalendarService {

    private final GoogleTokenCache tokenCache;

    private final GoogleCalendarClient googleCalendarClient;

    public GoogleCalendarEventListResponse fetchCalendar(Long memberId,String timeMin,String timeMax) {
        GoogleTokenInfo tokens = tokenCache.get(memberId);

        if(tokens == null) {
            throw new RuntimeException("No Access Token");
        }

        String accessToken = tokens.getAccessToken();

        return googleCalendarClient.getCalendarEvents(accessToken, toUtcString(timeMin), toUtcString(timeMax));
    }

    private String toUtcString(String time) {
        LocalDateTime localDateTime = LocalDateTime.parse(time);

        ZonedDateTime zonedDateTime = localDateTime.atZone(ZoneId.of("Asia/Seoul"));

        Instant utcInstant  = zonedDateTime.toInstant();

        return utcInstant.toString();
    }

}
