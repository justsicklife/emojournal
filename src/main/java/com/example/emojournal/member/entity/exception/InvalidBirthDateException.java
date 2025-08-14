package com.example.emojournal.member.entity.exception;

public class InvalidBirthDateException extends RuntimeException {
    public InvalidBirthDateException() {
        super("생년월일 정보가 올바르지 않습니다.");
    }

    public InvalidBirthDateException(String message) {
        super(message);
    }
}