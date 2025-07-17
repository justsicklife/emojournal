package com.example.emojournal.controller;

import com.example.emojournal.auth.token.GoogleTokenCache;
import com.example.emojournal.calendar.dto.GoogleCalendarEventListResponse;
import com.example.emojournal.dto.GoogleTokenInfo;
import com.example.emojournal.service.GoogleCalendarService;
import jakarta.servlet.http.HttpServletRequest;
import lombok.RequiredArgsConstructor;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@RestController
@RequiredArgsConstructor
public class CalendarController {

    private final GoogleCalendarService googleCalendarService;

    @GetMapping("/calendar")
    public GoogleCalendarEventListResponse getCalendar(HttpServletRequest request, @RequestParam String timeMin,@RequestParam String timeMax) {

        Long memberId = (Long)request.getAttribute("memberId");

        return googleCalendarService.fetchCalendar(memberId, timeMin, timeMax);

    }

}
