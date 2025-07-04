# EmoJournal 📝✨

감정 분석이 포함된 일기 작성 + 캘린더 시각화 웹 서비스

##  프로젝트 개요

EmoJournal은 사용자의 일기를 통해 감정을 분석하고, 이를 캘린더에 시각화하여 감정의 흐름을 한눈에 볼 수 있는 웹 서비스입니다.

- **개발 기간**: 2025년 8월 중순까지 완료 목표
- **목표**: 일기 작성을 통한 감정 기록 및 시각화로 사용자의 감정 패턴 분석 지원

## 👥 팀원 구성

### Backend
- 정하형
- 이동주

### Frontend  
- 이지훈
- 양하진
- 정원영

## 🛠 기술 스택

### Frontend
- **React** - 사용자 인터페이스 구축
- **Figma** - UI/UX 디자인

### Backend
- **Spring** - 서버 사이드 애플리케이션
- **Java 17** - 개발 언어

### API
- **Gemini API** - 감정 분석
- **Google Calendar API** - 일정 및 감정 표시

## ✨ 주요 기능

### 1. 일기 작성 및 저장
- 사용자 친화적인 일기 작성 인터페이스
- 작성된 일기 데이터베이스 저장

### 2. 감정 분석 (Gemini API)
- 일기 내용 기반 자동 감정 분석
- 감정을 해시태그 형태(#감정)로 표시
- 분석된 감정을 캘린더에 연동

### 3. 캘린더 기능 (Google Calendar API)
- 감정 태그를 일정처럼 캘린더에 표시
- 감정 흐름의 시각적 표현
- 일정 조회, 추가, 수정, 삭제 기능

### 4. 사용자 인증
- Google OAuth 로그인 시스템
- 개인별 데이터 보안 관리

### 5. 개인화 서비스
- 로그인한 구글 계정 기반 데이터 관리
- 개인별 캘린더 및 일기 목록 연동

## 📱 화면 구성

### 메인 페이지
- 캘린더 뷰로 감정 흐름 표시
- 일기 작성 및 일정 관리 진입점

### 일기 작성 페이지
- 직관적인 텍스트 입력 인터페이스
- 실시간 감정 분석 및 저장

### 로그인 페이지
- 구글 OAuth 연동 로그인

### 내 정보 페이지
- 사용자 프로필 정보
- 작성한 일기 통계 및 목록

### 일기 목록 페이지
- 시간순 일기 목록 표시
- 감정별 필터링 기능

## 🎯 개발 목표

사용자가 자신의 감정을 기록하고 시각화함으로써 감정 패턴을 인식하고, 더 나은 감정 관리를 할 수 있도록 돕는 서비스를 구축하는 것이 목표입니다.

---
