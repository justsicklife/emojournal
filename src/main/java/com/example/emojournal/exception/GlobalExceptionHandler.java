package com.example.emojournal.exception;

import com.example.emojournal.auth.jwt.entity.exception.GoogleTokenNotFoundException;
import com.example.emojournal.auth.jwt.entity.exception.InvalidAccessTokenException;
import com.example.emojournal.auth.jwt.entity.exception.InvalidRefreshTokenException;
import com.example.emojournal.member.entity.exception.InvalidBirthDateException;
import com.example.emojournal.member.entity.exception.MemberNotFoundException;
import lombok.extern.slf4j.Slf4j;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.MethodArgumentNotValidException;
import org.springframework.web.bind.annotation.ExceptionHandler;
import org.springframework.web.bind.annotation.RestControllerAdvice;

import java.util.stream.Collectors;

@Slf4j
@RestControllerAdvice
public class GlobalExceptionHandler  {

    @ExceptionHandler(MemberNotFoundException.class)
    public ResponseEntity<ErrorResponse> handleMemberNotFound(MemberNotFoundException ex) {
        log.error("member not found", ex);
        return ResponseEntity
                .status(HttpStatus.NOT_FOUND)
                .body(new ErrorResponse("member not found", ex.getMessage()));
    }

    @ExceptionHandler(InvalidAccessTokenException.class)
    public ResponseEntity<ErrorResponse> handleInvalidAccessToken(InvalidAccessTokenException ex) {
        return ResponseEntity
                .status(HttpStatus.UNAUTHORIZED)
                .body(new ErrorResponse("INVALID_ACCESS_TOKEN", ex.getMessage()));
    }

    @ExceptionHandler(GoogleTokenNotFoundException.class)
    public ResponseEntity<ErrorResponse> handleGoogleTokenNotFound(GoogleTokenNotFoundException ex) {
        return ResponseEntity
                .status(HttpStatus.NOT_FOUND)
                .body(new ErrorResponse("GOOGLE_TOKEN_NOT_FOUND", ex.getMessage()));
    }

    @ExceptionHandler(InvalidRefreshTokenException.class)
    public ResponseEntity<ErrorResponse> handleInvalidRefreshToken(InvalidRefreshTokenException ex) {
        return ResponseEntity
                .status(HttpStatus.UNAUTHORIZED) // 401
                .body(new ErrorResponse("INVALID_REFRESH_TOKEN", ex.getMessage()));
    }

    @ExceptionHandler(MethodArgumentNotValidException.class)
    public ResponseEntity<ErrorResponse> handleValidationExceptions(MethodArgumentNotValidException ex) {
        String message = ex.getBindingResult().getFieldErrors().stream()
                .map(error -> error.getField() + ": " + error.getDefaultMessage())
                .collect(Collectors.joining("; "));

        return ResponseEntity
                .status(HttpStatus.BAD_REQUEST)
                .body(new ErrorResponse("VALIDATION_ERROR", message));
    }
}
