[33mcommit 3c36d00bffe427c33ea55e6390ede2b9f6404570[m[33m ([m[1;36mHEAD -> [m[1;32mmaster[m[33m, [m[1;31morigin/master[m[33m)[m
Author: justsicklife <justsicklife@gmail.com>
Date:   Mon Aug 11 21:09:17 2025 +0900

    테스트 커밋

[33mcommit ae15ee1ddf4bef2a11c4f387a38fef73ddc7cd3e[m
Author: justsicklife <justsicklife@gmail.com>
Date:   Mon Aug 11 20:32:00 2025 +0900

    .gradle 폴더,build 폴더 제외하고 커밋

 .gradle/8.14.2/checksums/checksums.lock            | Bin [31m0[m -> [32m17[m bytes
 .../8.14.2/executionHistory/executionHistory.bin   | Bin [31m0[m -> [32m72475[m bytes
 .../8.14.2/executionHistory/executionHistory.lock  | Bin [31m0[m -> [32m17[m bytes
 .gradle/8.14.2/fileChanges/last-build.bin          | Bin [31m0[m -> [32m1[m bytes
 .gradle/8.14.2/fileHashes/fileHashes.bin           | Bin [31m0[m -> [32m25747[m bytes
 .gradle/8.14.2/fileHashes/fileHashes.lock          | Bin [31m0[m -> [32m17[m bytes
 .gradle/8.14.2/fileHashes/resourceHashesCache.bin  | Bin [31m0[m -> [32m20775[m bytes
 .gradle/8.14.2/gc.properties                       |   0
 .gradle/buildOutputCleanup/buildOutputCleanup.lock | Bin [31m0[m -> [32m17[m bytes
 .gradle/buildOutputCleanup/cache.properties        |   2 [32m+[m
 .gradle/buildOutputCleanup/outputFiles.bin         | Bin [31m0[m -> [32m18839[m bytes
 .gradle/vcs-1/gc.properties                        |   0
 .idea/.gitignore                                   |   3 [32m+[m[31m-[m
 .../example/emojournal/EmoJournalApplication.class | Bin [31m0[m -> [32m836[m bytes
 .../jwt/controller/RefreshTokenController.class    | Bin [31m0[m -> [32m5407[m bytes
 .../emojournal/auth/jwt/dto/AuthTokens.class       | Bin [31m0[m -> [32m1650[m bytes
 .../emojournal/auth/jwt/entity/RefreshToken.class  | Bin [31m0[m -> [32m4081[m bytes
 .../auth/jwt/entity/embedded/ClientInfo.class      | Bin [31m0[m -> [32m1665[m bytes
 .../GoogleTokenAlreadyExistsException.class        | Bin [31m0[m -> [32m1104[m bytes
 .../exception/GoogleTokenNotFoundException.class   | Bin [31m0[m -> [32m1044[m bytes
 .../exception/InvalidAccessTokenException.class    | Bin [31m0[m -> [32m487[m bytes
 .../exception/InvalidRefreshTokenException.class   | Bin [31m0[m -> [32m511[m bytes
 .../RefreshTokenAlreadyExistsException.class       | Bin [31m0[m -> [32m1068[m bytes
 .../auth/jwt/entity/item/OAuthProvider.class       | Bin [31m0[m -> [32m1245[m bytes
 .../auth/jwt/filter/JwtAuthenticationFilter.class  | Bin [31m0[m -> [32m3786[m bytes
 .../interceptor/JwtAuthenticationInterceptor.class | Bin [31m0[m -> [32m2248[m bytes
 .../jwt/repository/RefreshTokenRepository.class    | Bin [31m0[m -> [32m1207[m bytes
 .../auth/jwt/service/RefreshTokenService.class     | Bin [31m0[m -> [32m4292[m bytes
 .../auth/jwt/service/TokenReissueService.class     | Bin [31m0[m -> [32m3583[m bytes
 .../auth/jwt/utils/AuthTokenGenerator.class        | Bin [31m0[m -> [32m1696[m bytes
 .../jwt/utils/AuthenticationContextHolder.class    | Bin [31m0[m -> [32m1012[m bytes
 .../auth/jwt/utils/JwtTokenProvider.class          | Bin [31m0[m -> [32m4155[m bytes
 .../auth/jwt/utils/UserAgentParser.class           | Bin [31m0[m -> [32m1908[m bytes
 .../auth/jwt/utils/crypto/CryptoUtil.class         | Bin [31m0[m -> [32m1812[m bytes
 .../auth/oauth/client/GoogleApiClient.class        | Bin [31m0[m -> [32m6752[m bytes
 .../auth/oauth/client/OAuthApiClient.class         | Bin [31m0[m -> [32m571[m bytes
 .../oauth/client/RequestOAuthInfoService.class     | Bin [31m0[m -> [32m3931[m bytes
 .../auth/oauth/controller/OAuthController.class    | Bin [31m0[m -> [32m4753[m bytes
 .../auth/oauth/dto/AuthorizationCodeRequest.class  | Bin [31m0[m -> [32m835[m bytes
 .../dto/GoogleTokenDto$GoogleTokenDtoBuilder.class | Bin [31m0[m -> [32m2931[m bytes
 .../emojournal/auth/oauth/dto/GoogleTokenDto.class | Bin [31m0[m -> [32m3757[m bytes
 .../emojournal/auth/oauth/dto/LoginResponse.class  | Bin [31m0[m -> [32m1219[m bytes
 ...thLoginTokenDto$OAuthLoginTokenDtoBuilder.class | Bin [31m0[m -> [32m2135[m bytes
 .../auth/oauth/dto/OAuthLoginTokenDto.class        | Bin [31m0[m -> [32m1654[m bytes
 .../oauth/dto/OAuthTokens$OAuthTokensBuilder.class | Bin [31m0[m -> [32m2106[m bytes
 .../emojournal/auth/oauth/dto/OAuthTokens.class    | Bin [31m0[m -> [32m2377[m bytes
 .../dto/response/GoogleAccessTokenResponse.class   | Bin [31m0[m -> [32m1718[m bytes
 .../oauth/dto/response/GoogleInfoResponse.class    | Bin [31m0[m -> [32m1421[m bytes
 .../oauth/dto/response/GoogleTokenResponse.class   | Bin [31m0[m -> [32m2284[m bytes
 .../oauth/dto/response/OAuthLoginResponse.class    | Bin [31m0[m -> [32m1533[m bytes
 .../entity/GoogleToken$GoogleTokenBuilder.class    | Bin [31m0[m -> [32m3126[m bytes
 .../emojournal/auth/oauth/entity/GoogleToken.class | Bin [31m0[m -> [32m3994[m bytes
 .../oauth/interceptor/GoogleTokenInterceptor.class | Bin [31m0[m -> [32m5679[m bytes
 .../oauth/repository/GoogleTokenRepository.class   | Bin [31m0[m -> [32m1023[m bytes
 .../auth/oauth/service/GoogleTokenService.class    | Bin [31m0[m -> [32m3297[m bytes
 .../oauth/service/OAuthLoginFacadeService.class    | Bin [31m0[m -> [32m7734[m bytes
 .../auth/oauth/service/OAuthLoginService.class     | Bin [31m0[m -> [32m5166[m bytes
 .../auth/oauth/utils/GoogleLoginParams.class       | Bin [31m0[m -> [32m1801[m bytes
 .../auth/oauth/utils/OAuthInfoResponse.class       | Bin [31m0[m -> [32m310[m bytes
 .../auth/oauth/utils/OAuthLoginParams.class        | Bin [31m0[m -> [32m408[m bytes
 .../calendar/client/GoogleCalendarClient.class     | Bin [31m0[m -> [32m4171[m bytes
 .../calendar/controller/CalendarController.class   | Bin [31m0[m -> [32m1767[m bytes
 .../calendar/dto/GoogleCalendarEventDto$Time.class | Bin [31m0[m -> [32m1795[m bytes
 .../calendar/dto/GoogleCalendarEventDto.class      | Bin [31m0[m -> [32m2868[m bytes
 .../dto/GoogleCalendarEventListResponse.class      | Bin [31m0[m -> [32m1189[m bytes
 .../calendar/service/GoogleCalendarService.class   | Bin [31m0[m -> [32m4095[m bytes
 .../example/emojournal/config/ClientConfig.class   | Bin [31m0[m -> [32m661[m bytes
 .../com/example/emojournal/config/CorsConfig.class | Bin [31m0[m -> [32m1596[m bytes
 .../example/emojournal/config/PropertyConfig.class | Bin [31m0[m -> [32m529[m bytes
 .../example/emojournal/config/WebMvcConfig.class   | Bin [31m0[m -> [32m1817[m bytes
 .../controller/EmotionAnalysisController.class     | Bin [31m0[m -> [32m5553[m bytes
 .../emotion/dto/EmotionAnalysisRequest.class       | Bin [31m0[m -> [32m2958[m bytes
 .../emotion/dto/EmotionAnalysisResponse.class      | Bin [31m0[m -> [32m8051[m bytes
 .../emotion/gemini/GeminiApiClient.class           | Bin [31m0[m -> [32m8409[m bytes
 .../emotion/service/EmotionAnalysisService.class   | Bin [31m0[m -> [32m7287[m bytes
 .../member/controller/MemberController.class       | Bin [31m0[m -> [32m3885[m bytes
 ...emberResponseDto$MemberResponseDtoBuilder.class | Bin [31m0[m -> [32m2906[m bytes
 .../emojournal/member/dto/MemberResponseDto.class  | Bin [31m0[m -> [32m2774[m bytes
 .../member/dto/requst/MemberUpdateRequest.class    | Bin [31m0[m -> [32m2878[m bytes
 .../emojournal/member/entity/Item/Gender.class     | Bin [31m0[m -> [32m1231[m bytes
 .../emojournal/member/entity/Item/Mbti.class       | Bin [31m0[m -> [32m2095[m bytes
 .../member/entity/Member$MemberBuilder.class       | Bin [31m0[m -> [32m2466[m bytes
 .../example/emojournal/member/entity/Member.class  | Bin [31m0[m -> [32m5744[m bytes
 .../entity/exception/MemberNotFoundException.class | Bin [31m0[m -> [32m492[m bytes
 .../member/interceptor/MemberInterceptor.class     | Bin [31m0[m -> [32m1251[m bytes
 .../member/repository/MemberRepository.class       | Bin [31m0[m -> [32m575[m bytes
 .../emojournal/member/service/MemberService.class  | Bin [31m0[m -> [32m3788[m bytes
 build/reports/problems/problems-report.html        | 663 [32m+++++++++++++++++++++[m
 build/resources/main/application.properties        |  41 [32m++[m
 .../tmp/compileJava/previous-compilation-data.bin  | Bin [31m0[m -> [32m84585[m bytes
 .../emojournal/auth/oauth/entity/GoogleToken.java  |   2 [32m+[m[31m-[m
 91 files changed, 709 insertions(+), 2 deletions(-)

[33mcommit 6dd82a6c688ff93fdf1640a069b6a7d8b0cd2690[m
Author: justsicklife <justsicklife@gmail.com>
Date:   Mon Aug 11 20:16:44 2025 +0900

    Remove .gradle from git tracking

 .gradle/8.14.2/checksums/checksums.lock            | Bin [31m17[m -> [32m0[m bytes
 .gradle/8.14.2/checksums/md5-checksums.bin         | Bin [31m69165[m -> [32m0[m bytes
 .gradle/8.14.2/checksums/sha1-checksums.bin        | Bin [31m147977[m -> [32m0[m bytes
 .../8.14.2/executionHistory/executionHistory.bin   | Bin [31m766102[m -> [32m0[m bytes
 .../8.14.2/executionHistory/executionHistory.lock  | Bin [31m17[m -> [32m0[m bytes
 .gradle/8.14.2/fileChanges/last-build.bin          | Bin [31m1[m -> [32m0[m bytes
 .gradle/8.14.2/fileHashes/fileHashes.bin           | Bin [31m41897[m -> [32m0[m bytes
 .gradle/8.14.2/fileHashes/fileHashes.lock          | Bin [31m17[m -> [32m0[m bytes
 .gradle/8.14.2/fileHashes/resourceHashesCache.bin  | Bin [31m68717[m -> [32m0[m bytes
 .gradle/buildOutputCleanup/buildOutputCleanup.lock | Bin [31m17[m -> [32m0[m bytes
 .gradle/buildOutputCleanup/cache.properties        |   2 [31m-[m
 .gradle/buildOutputCleanup/outputFiles.bin         | Bin [31m20225[m -> [32m0[m bytes
 .gradle/file-system.probe                          | Bin [31m8[m -> [32m0[m bytes
 .gradle/vcs-1/gc.properties                        |   0
 .../main/resources/env.properties                  |   0
 .../calendar/GoogleCalendarClientTest.java         |  56 [31m---------------------[m
 16 files changed, 58 deletions(-)

[33mcommit 19ea49bcdcd83232187a5eb2023e5091ecd73db8[m
Author: justsicklife <justsicklife@gmail.com>
Date:   Mon Aug 11 17:14:00 2025 +0900

    다중 로그인 기능 구현, 회원 수정 기능 구현

 .gradle/8.14.2/checksums/checksums.lock            | Bin [31m17[m -> [32m17[m bytes
 .gradle/8.14.2/checksums/md5-checksums.bin         | Bin [31m69115[m -> [32m69165[m bytes
 .gradle/8.14.2/checksums/sha1-checksums.bin        | Bin [31m147707[m -> [32m147977[m bytes
 .../8.14.2/executionHistory/executionHistory.bin   | Bin [31m550633[m -> [32m766102[m bytes
 .../8.14.2/executionHistory/executionHistory.lock  | Bin [31m17[m -> [32m17[m bytes
 .gradle/8.14.2/fileHashes/fileHashes.bin           | Bin [31m40697[m -> [32m41897[m bytes
 .gradle/8.14.2/fileHashes/fileHashes.lock          | Bin [31m17[m -> [32m17[m bytes
 .gradle/8.14.2/fileHashes/resourceHashesCache.bin  | Bin [31m61917[m -> [32m68717[m bytes
 .gradle/buildOutputCleanup/buildOutputCleanup.lock | Bin [31m17[m -> [32m17[m bytes
 .gradle/buildOutputCleanup/outputFiles.bin         | Bin [31m20207[m -> [32m20225[m bytes
 .gradle/file-system.probe                          | Bin [31m8[m -> [32m8[m bytes
 build.gradle                                       |   1 [31m-[m
 .../emojournal/EmoJournalApplicationTests.class    | Bin [31m561[m -> [32m0[m bytes
 ...ojournal.calendar.GoogleCalendarClientTest.html | 165 [31m---------------------[m
 .../test/TEST-com.example.emojournal.Aaa.xml       |   8 [31m-[m
 .../jwt/controller/RefreshTokenController.java     |  32 [32m+++[m[31m-[m
 .../emojournal/auth/jwt/entity/RefreshToken.java   |  11 [32m+[m[31m-[m
 .../auth/jwt/entity/embedded/ClientInfo.java       |  36 [32m+++++[m
 .../GoogleTokenAlreadyExistsException.java         |   7 [32m+[m
 .../exception/GoogleTokenNotFoundException.java    |   7 [32m+[m
 .../exception/InvalidAccessTokenException.java     |   7 [32m+[m
 .../exception/InvalidRefreshTokenException.java    |   8 [32m+[m
 .../RefreshTokenAlreadyExistsException.java        |   7 [32m+[m
 .../auth/jwt/filter/JwtAuthenticationFilter.java   |  75 [32m++[m[31m--------[m
 .../interceptor/JwtAuthenticationInterceptor.java  |  38 [32m+++++[m
 .../jwt/repository/RefreshTokenRepository.java     |   5 [32m+[m[31m-[m
 .../auth/jwt/service/RefreshTokenService.java      |  32 [32m+++[m[31m-[m
 .../auth/jwt/service/TokenReissueService.java      |   8 [32m+[m[31m-[m
 .../jwt/utils/AuthenticationContextHolder.java     |  19 [32m+++[m
 .../emojournal/auth/jwt/utils/UserAgentParser.java |  35 [32m+++++[m
 .../auth/oauth/controller/OAuthController.java     |   8 [32m+[m[31m-[m
 .../auth/oauth/dto/OAuthLoginTokenDto.java         |   3 [32m+[m[31m-[m
 .../oauth/interceptor/GoogleTokenInterceptor.java  |  37 [32m++++[m[31m-[m
 .../oauth/repository/GoogleTokenRepository.java    |   2 [32m+[m
 .../auth/oauth/service/GoogleTokenService.java     |  16 [32m+[m[31m-[m
 .../oauth/service/OAuthLoginFacadeService.java     |  58 [32m++++++[m[31m--[m
 .../calendar/controller/CalendarController.java    |   3 [32m+[m[31m-[m
 .../calendar/service/GoogleCalendarService.java    |   2 [32m+[m[31m-[m
 .../example/emojournal/config/WebMvcConfig.java    |   9 [32m+[m[31m-[m
 .../member/controller/MemberController.java        |   7 [32m+[m[31m-[m
 .../member/interceptor/MemberInterceptor.java      |  22 [32m+++[m
 41 files changed, 380 insertions(+), 288 deletions(-)

[33mcommit 40642d35b2ff84b8e3f1a6afcafa3699d3350c3f[m
Author: justsicklife <justsicklife@gmail.com>
Date:   Thu Jul 31 09:26:05 2025 +0900

    member 수정 기능 추가

 .../8.14.2/executionHistory/executionHistory.bin   | Bin [31m396329[m -> [32m550633[m bytes
 .../8.14.2/executionHistory/executionHistory.lock  | Bin [31m17[m -> [32m17[m bytes
 .gradle/8.14.2/fileHashes/fileHashes.bin           | Bin [31m40447[m -> [32m40697[m bytes
 .gradle/8.14.2/fileHashes/fileHashes.lock          | Bin [31m17[m -> [32m17[m bytes
 .gradle/8.14.2/fileHashes/resourceHashesCache.bin  | Bin [31m61509[m -> [32m61917[m bytes
 .gradle/buildOutputCleanup/buildOutputCleanup.lock | Bin [31m17[m -> [32m17[m bytes
 .gradle/buildOutputCleanup/outputFiles.bin         | Bin [31m20153[m -> [32m20207[m bytes
 .gradle/file-system.probe                          | Bin [31m8[m -> [32m8[m bytes
 .../example/emojournal/EmoJournalApplication.class | Bin [31m836[m -> [32m0[m bytes
 .../jwt/controller/RefreshTokenController.class    | Bin [31m5188[m -> [32m0[m bytes
 .../emojournal/auth/jwt/dto/AuthTokens.class       | Bin [31m1650[m -> [32m0[m bytes
 .../emojournal/auth/jwt/entity/RefreshToken.class  | Bin [31m3814[m -> [32m0[m bytes
 .../auth/jwt/entity/item/OAuthProvider.class       | Bin [31m1245[m -> [32m0[m bytes
 .../auth/jwt/filter/JwtAuthenticationFilter.class  | Bin [31m4784[m -> [32m0[m bytes
 .../jwt/repository/RefreshTokenRepository.class    | Bin [31m1166[m -> [32m0[m bytes
 .../auth/jwt/service/RefreshTokenService.class     | Bin [31m3276[m -> [32m0[m bytes
 .../auth/jwt/service/TokenReissueService.class     | Bin [31m3578[m -> [32m0[m bytes
 .../auth/jwt/utils/AuthTokenGenerator.class        | Bin [31m1696[m -> [32m0[m bytes
 .../auth/jwt/utils/JwtTokenProvider.class          | Bin [31m4155[m -> [32m0[m bytes
 .../auth/jwt/utils/crypto/CryptoUtil.class         | Bin [31m1812[m -> [32m0[m bytes
 .../auth/oauth/client/GoogleApiClient.class        | Bin [31m6752[m -> [32m0[m bytes
 .../auth/oauth/client/OAuthApiClient.class         | Bin [31m571[m -> [32m0[m bytes
 .../oauth/client/RequestOAuthInfoService.class     | Bin [31m3931[m -> [32m0[m bytes
 .../auth/oauth/controller/OAuthController.class    | Bin [31m4756[m -> [32m0[m bytes
 .../auth/oauth/dto/AuthorizationCodeRequest.class  | Bin [31m835[m -> [32m0[m bytes
 .../dto/GoogleTokenDto$GoogleTokenDtoBuilder.class | Bin [31m2931[m -> [32m0[m bytes
 .../emojournal/auth/oauth/dto/GoogleTokenDto.class | Bin [31m3757[m -> [32m0[m bytes
 .../emojournal/auth/oauth/dto/LoginResponse.class  | Bin [31m1219[m -> [32m0[m bytes
 ...thLoginTokenDto$OAuthLoginTokenDtoBuilder.class | Bin [31m2346[m -> [32m0[m bytes
 .../auth/oauth/dto/OAuthLoginTokenDto.class        | Bin [31m1943[m -> [32m0[m bytes
 .../oauth/dto/OAuthTokens$OAuthTokensBuilder.class | Bin [31m2106[m -> [32m0[m bytes
 .../emojournal/auth/oauth/dto/OAuthTokens.class    | Bin [31m2377[m -> [32m0[m bytes
 .../dto/response/GoogleAccessTokenResponse.class   | Bin [31m1718[m -> [32m0[m bytes
 .../oauth/dto/response/GoogleInfoResponse.class    | Bin [31m1421[m -> [32m0[m bytes
 .../oauth/dto/response/GoogleTokenResponse.class   | Bin [31m2284[m -> [32m0[m bytes
 .../oauth/dto/response/OAuthLoginResponse.class    | Bin [31m1533[m -> [32m0[m bytes
 .../entity/GoogleToken$GoogleTokenBuilder.class    | Bin [31m3126[m -> [32m0[m bytes
 .../emojournal/auth/oauth/entity/GoogleToken.class | Bin [31m4016[m -> [32m0[m bytes
 .../oauth/interceptor/GoogleTokenInterceptor.class | Bin [31m5652[m -> [32m0[m bytes
 .../oauth/repository/GoogleTokenRepository.class   | Bin [31m830[m -> [32m0[m bytes
 .../auth/oauth/service/GoogleTokenService.class    | Bin [31m2285[m -> [32m0[m bytes
 .../oauth/service/OAuthLoginFacadeService.class    | Bin [31m6911[m -> [32m0[m bytes
 .../auth/oauth/service/OAuthLoginService.class     | Bin [31m5166[m -> [32m0[m bytes
 .../auth/oauth/utils/GoogleLoginParams.class       | Bin [31m1801[m -> [32m0[m bytes
 .../auth/oauth/utils/OAuthInfoResponse.class       | Bin [31m310[m -> [32m0[m bytes
 .../auth/oauth/utils/OAuthLoginParams.class        | Bin [31m408[m -> [32m0[m bytes
 .../calendar/client/GoogleCalendarClient.class     | Bin [31m4171[m -> [32m0[m bytes
 .../calendar/controller/CalendarController.class   | Bin [31m1794[m -> [32m0[m bytes
 .../calendar/dto/GoogleCalendarEventDto$Time.class | Bin [31m1795[m -> [32m0[m bytes
 .../calendar/dto/GoogleCalendarEventDto.class      | Bin [31m2868[m -> [32m0[m bytes
 .../dto/GoogleCalendarEventListResponse.class      | Bin [31m1189[m -> [32m0[m bytes
 .../calendar/service/GoogleCalendarService.class   | Bin [31m4080[m -> [32m0[m bytes
 .../example/emojournal/config/ClientConfig.class   | Bin [31m661[m -> [32m0[m bytes
 .../com/example/emojournal/config/CorsConfig.class | Bin [31m1596[m -> [32m0[m bytes
 .../example/emojournal/config/PropertyConfig.class | Bin [31m529[m -> [32m0[m bytes
 .../example/emojournal/config/WebMvcConfig.class   | Bin [31m1554[m -> [32m0[m bytes
 .../controller/EmotionAnalysisController.class     | Bin [31m5553[m -> [32m0[m bytes
 .../emotion/dto/EmotionAnalysisRequest.class       | Bin [31m2958[m -> [32m0[m bytes
 .../emotion/dto/EmotionAnalysisResponse.class      | Bin [31m8051[m -> [32m0[m bytes
 .../emotion/gemini/GeminiApiClient.class           | Bin [31m8409[m -> [32m0[m bytes
 .../emotion/service/EmotionAnalysisService.class   | Bin [31m7287[m -> [32m0[m bytes
 .../member/controller/MemberController.class       | Bin [31m1780[m -> [32m0[m bytes
 ...emberResponseDto$MemberResponseDtoBuilder.class | Bin [31m2906[m -> [32m0[m bytes
 .../emojournal/member/dto/MemberResponseDto.class  | Bin [31m2774[m -> [32m0[m bytes
 .../emojournal/member/entity/Item/Gender.class     | Bin [31m1231[m -> [32m0[m bytes
 .../emojournal/member/entity/Item/Mbti.class       | Bin [31m2095[m -> [32m0[m bytes
 .../member/entity/Member$MemberBuilder.class       | Bin [31m2466[m -> [32m0[m bytes
 .../example/emojournal/member/entity/Member.class  | Bin [31m5593[m -> [32m0[m bytes
 .../entity/exception/MemberNotFoundException.class | Bin [31m492[m -> [32m0[m bytes
 .../member/repository/MemberRepository.class       | Bin [31m575[m -> [32m0[m bytes
 .../emojournal/member/service/MemberService.class  | Bin [31m2526[m -> [32m0[m bytes
 build/reports/problems/problems-report.html        | 663 [31m---------------------[m
 build/reports/tests/test/css/base-style.css        | 174 [31m------[m
 build/reports/tests/test/css/style.css             |  84 [31m---[m
 build/reports/tests/test/index.html                | 145 [31m-----[m
 build/reports/tests/test/js/report.js              | 218 [31m-------[m
 .../packages/com.example.emojournal.calendar.html  | 115 [31m----[m
 build/resources/main/application.properties        |  41 [31m--[m
 build/test-results/test/binary/output.bin          | Bin [31m4440[m -> [32m0[m bytes
 build/test-results/test/binary/output.bin.idx      | Bin [31m69[m -> [32m0[m bytes
 build/test-results/test/binary/results.bin         | Bin [31m2829[m -> [32m0[m bytes
 .../stash-dir/MemberController.class.uniqueId2     | Bin [31m1780[m -> [32m0[m bytes
 .../stash-dir/MemberService.class.uniqueId3        | Bin [31m2526[m -> [32m0[m bytes
 .../stash-dir/OAuthController.class.uniqueId0      | Bin [31m4756[m -> [32m0[m bytes
 .../OAuthLoginFacadeService.class.uniqueId1        | Bin [31m6911[m -> [32m0[m bytes
 .../tmp/compileJava/previous-compilation-data.bin  | Bin [31m83551[m -> [32m0[m bytes
 .../compileTestJava/previous-compilation-data.bin  | Bin [31m32010[m -> [32m0[m bytes
 .../member/controller/MemberController.java        |  21 [32m+[m[31m-[m
 .../member/dto/requst/MemberUpdateRequest.java     |   1 [31m-[m
 .../emojournal/member/entity/Item/Gender.java      |   2 [32m+[m[31m-[m
 .../example/emojournal/member/entity/Member.java   |   2 [32m+[m
 .../emojournal/member/service/MemberService.java   |  17 [32m+[m[31m-[m
 92 files changed, 31 insertions(+), 1452 deletions(-)

[33mcommit 298951f364869c87d84555b3c3fb1c6bfb566c86[m
Author: justsicklife <justsicklife@gmail.com>
Date:   Wed Jul 30 21:07:44 2025 +0900

    member 수정 하는 기능 추가 예정

 .../8.14.2/executionHistory/executionHistory.bin   | Bin [31m396329[m -> [32m396329[m bytes
 .../8.14.2/executionHistory/executionHistory.lock  | Bin [31m17[m -> [32m17[m bytes
 .gradle/8.14.2/fileHashes/fileHashes.bin           | Bin [31m40247[m -> [32m40447[m bytes
 .gradle/8.14.2/fileHashes/fileHashes.lock          | Bin [31m17[m -> [32m17[m bytes
 .gradle/8.14.2/fileHashes/resourceHashesCache.bin  | Bin [31m60795[m -> [32m61509[m bytes
 .gradle/buildOutputCleanup/buildOutputCleanup.lock | Bin [31m17[m -> [32m17[m bytes
 .gradle/file-system.probe                          | Bin [31m8[m -> [32m8[m bytes
 .../example/emojournal/EmoJournalApplication.class | Bin [31m763[m -> [32m836[m bytes
 .../auth/jwt/service/TokenReissueService.class     | Bin [31m3484[m -> [32m3578[m bytes
 .../auth/oauth/service/GoogleTokenService.class    | Bin [31m2267[m -> [32m2285[m bytes
 .../oauth/service/OAuthLoginFacadeService.class    | Bin [31m6845[m -> [32m6911[m bytes
 .../member/controller/MemberController.class       | Bin [31m1780[m -> [32m1780[m bytes
 ...emberResponseDto$MemberResponseDtoBuilder.class | Bin [31m2335[m -> [32m2906[m bytes
 .../emojournal/member/dto/MemberResponseDto.class  | Bin [31m1997[m -> [32m2774[m bytes
 .../emojournal/member/entity/Item/Gender.class     | Bin [31m0[m -> [32m1231[m bytes
 .../emojournal/member/entity/Item/Mbti.class       | Bin [31m0[m -> [32m2095[m bytes
 .../member/entity/Member$MemberBuilder.class       | Bin [31m2466[m -> [32m2466[m bytes
 .../example/emojournal/member/entity/Member.class  | Bin [31m4236[m -> [32m5593[m bytes
 .../emojournal/member/service/MemberService.class  | Bin [31m2432[m -> [32m2526[m bytes
 build/reports/problems/problems-report.html        |   2 [32m+[m[31m-[m
 .../stash-dir/MemberController.class.uniqueId2     | Bin [31m0[m -> [32m1780[m bytes
 .../stash-dir/MemberService.class.uniqueId3        | Bin [31m0[m -> [32m2526[m bytes
 .../stash-dir/OAuthController.class.uniqueId0      | Bin [31m4507[m -> [32m4756[m bytes
 .../OAuthLoginFacadeService.class.uniqueId1        | Bin [31m0[m -> [32m6911[m bytes
 .../tmp/compileJava/previous-compilation-data.bin  | Bin [31m81256[m -> [32m83551[m bytes
 .../example/emojournal/EmoJournalApplication.java  |   2 [32m++[m
 .../auth/jwt/service/TokenReissueService.java      |   6 [32m++++[m[31m--[m
 .../auth/oauth/service/GoogleTokenService.java     |   2 [32m+[m[31m-[m
 .../oauth/service/OAuthLoginFacadeService.java     |   6 [32m+++++[m[31m-[m
 .../member/controller/MemberController.java        |  14 [32m+++++++++++[m[31m---[m
 .../emojournal/member/dto/MemberResponseDto.java   |   4 [32m+++[m[31m-[m
 .../member/dto/requst/MemberUpdateRequest.java     |  11 [32m+++++++++++[m
 .../emojournal/member/entity/Item/Gender.java      |   5 [32m+++++[m
 .../emojournal/member/entity/Item/Mbti.java        |  13 [32m+++++++++++++[m
 .../example/emojournal/member/entity/Member.java   |  16 [32m++++++++++++++++[m
 .../emojournal/member/service/MemberService.java   |   6 [32m++++++[m
 36 files changed, 78 insertions(+), 9 deletions(-)

[33mcommit b05e2bca5af0d5d9ea53fe6cf88f066713aa67a4[m
Author: justsicklife <justsicklife@gmail.com>
Date:   Tue Jul 29 09:04:17 2025 +0900

    OAuthController 에 있었던 로직들 서비스 단으로 옮김

 .../8.14.2/executionHistory/executionHistory.bin   | Bin [31m396329[m -> [32m396329[m bytes
 .../8.14.2/executionHistory/executionHistory.lock  | Bin [31m17[m -> [32m17[m bytes
 .gradle/8.14.2/fileHashes/fileHashes.bin           | Bin [31m39997[m -> [32m40247[m bytes
 .gradle/8.14.2/fileHashes/fileHashes.lock          | Bin [31m17[m -> [32m17[m bytes
 .gradle/8.14.2/fileHashes/resourceHashesCache.bin  | Bin [31m35531[m -> [32m60795[m bytes
 .gradle/buildOutputCleanup/buildOutputCleanup.lock | Bin [31m17[m -> [32m17[m bytes
 .gradle/file-system.probe                          | Bin [31m8[m -> [32m8[m bytes
 .../emojournal/auth/jwt/entity/RefreshToken.class  | Bin [31m3520[m -> [32m3814[m bytes
 .../jwt/repository/RefreshTokenRepository.class    | Bin [31m865[m -> [32m1166[m bytes
 .../auth/jwt/service/RefreshTokenService.class     | Bin [31m2470[m -> [32m3276[m bytes
 .../auth/oauth/controller/OAuthController.class    | Bin [31m8370[m -> [32m4756[m bytes
 .../auth/oauth/dto/OAuthLoginResult.class          | Bin [31m967[m -> [32m0[m bytes
 ...thLoginTokenDto$OAuthLoginTokenDtoBuilder.class | Bin [31m0[m -> [32m2346[m bytes
 .../auth/oauth/dto/OAuthLoginTokenDto.class        | Bin [31m0[m -> [32m1943[m bytes
 .../oauth/service/OAuthLoginFacadeService.class    | Bin [31m0[m -> [32m6845[m bytes
 .../auth/oauth/service/OAuthLoginService.class     | Bin [31m5166[m -> [32m5166[m bytes
 .../stash-dir/OAuthController.class.uniqueId0      | Bin [31m0[m -> [32m4507[m bytes
 .../stash-dir/PropertyConfig.class.uniqueId0       | Bin [31m424[m -> [32m0[m bytes
 .../tmp/compileJava/previous-compilation-data.bin  | Bin [31m81091[m -> [32m81256[m bytes
 .../auth/oauth/controller/OAuthController.java     |  87 [32m+++[m[31m----------------[m
 .../auth/oauth/dto/AuthorizationCodeRequest.java   |   2 [32m+[m[31m-[m
 .../auth/oauth/dto/OAuthLoginResult.java           |  14 [31m---[m
 .../auth/oauth/dto/OAuthLoginTokenDto.java         |  15 [32m++++[m
 .../oauth/service/OAuthLoginFacadeService.java     |  94 [32m+++++++++++++++++++++[m
 24 files changed, 122 insertions(+), 90 deletions(-)

[33mcommit 3cb7615185012797102734e14442894403f0a93c[m
Author: justsicklife <justsicklife@gmail.com>
Date:   Mon Jul 28 11:11:25 2025 +0900

    OAuthController 책임이 너무 많음 단일책임원칙에 어긋남

 .../8.14.2/executionHistory/executionHistory.bin   | Bin [31m396329[m -> [32m396329[m bytes
 .../8.14.2/executionHistory/executionHistory.lock  | Bin [31m17[m -> [32m17[m bytes
 .gradle/8.14.2/fileHashes/fileHashes.bin           | Bin [31m39997[m -> [32m39997[m bytes
 .gradle/8.14.2/fileHashes/fileHashes.lock          | Bin [31m17[m -> [32m17[m bytes
 .gradle/buildOutputCleanup/buildOutputCleanup.lock | Bin [31m17[m -> [32m17[m bytes
 .gradle/file-system.probe                          | Bin [31m8[m -> [32m8[m bytes
 build/resources/main/application.properties        |   4 [32m++[m[31m--[m
 .../emojournal/auth/jwt/entity/RefreshToken.java   |   6 [32m+++++[m[31m-[m
 .../jwt/repository/RefreshTokenRepository.java     |   2 [32m++[m
 .../auth/jwt/service/RefreshTokenService.java      |  19 [32m+++++++++++++++++[m[31m--[m
 .../auth/oauth/controller/OAuthController.java     |  12 [32m++++++++++[m[31m--[m
 .../auth/oauth/service/OAuthLoginService.java      |   2 [32m++[m
 src/main/resources/application.properties          |   2 [32m+[m[31m-[m
 13 files changed, 39 insertions(+), 8 deletions(-)

[33mcommit 576eeac91113d93d348fefe67ef8a8ed487492c5[m
Author: justsicklife <justsicklife@gmail.com>
Date:   Sat Jul 26 05:57:58 2025 +0900

    패키지 구조 리펙토링

 .gradle/8.14.2/checksums/checksums.lock            | Bin [31m17[m -> [32m17[m bytes
 .gradle/8.14.2/checksums/md5-checksums.bin         | Bin [31m69015[m -> [32m69115[m bytes
 .gradle/8.14.2/checksums/sha1-checksums.bin        | Bin [31m147545[m -> [32m147707[m bytes
 .../8.14.2/executionHistory/executionHistory.bin   | Bin [31m396329[m -> [32m396329[m bytes
 .../8.14.2/executionHistory/executionHistory.lock  | Bin [31m17[m -> [32m17[m bytes
 .gradle/8.14.2/fileHashes/fileHashes.bin           | Bin [31m34297[m -> [32m39997[m bytes
 .gradle/8.14.2/fileHashes/fileHashes.lock          | Bin [31m17[m -> [32m17[m bytes
 .gradle/8.14.2/fileHashes/resourceHashesCache.bin  | Bin [31m32335[m -> [32m35531[m bytes
 .gradle/buildOutputCleanup/buildOutputCleanup.lock | Bin [31m17[m -> [32m17[m bytes
 .gradle/file-system.probe                          | Bin [31m8[m -> [32m8[m bytes
 build.gradle                                       |   3 [32m+[m
 .../emojournal/auth/client/GoogleApiClient.class   | Bin [31m6562[m -> [32m0[m bytes
 .../emojournal/auth/client/OAuthApiClient.class    | Bin [31m525[m -> [32m0[m bytes
 .../auth/client/RequestOAuthInfoService.class      | Bin [31m3707[m -> [32m0[m bytes
 .../emojournal/auth/dto/GoogleInfoResponse.class   | Bin [31m1356[m -> [32m0[m bytes
 .../emojournal/auth/dto/GoogleLoginParams.class    | Bin [31m1750[m -> [32m0[m bytes
 .../emojournal/auth/dto/LoginResponse.class        | Bin [31m1177[m -> [32m0[m bytes
 .../emojournal/auth/dto/OAuthInfoResponse.class    | Bin [31m293[m -> [32m0[m bytes
 .../emojournal/auth/dto/OAuthLoginParams.class     | Bin [31m391[m -> [32m0[m bytes
 .../emojournal/auth/dto/OAuthLoginResponse.class   | Bin [31m1447[m -> [32m0[m bytes
 .../jwt}/controller/RefreshTokenController.class   | Bin [31m5108[m -> [32m5188[m bytes
 .../emojournal/auth/{ => jwt}/dto/AuthTokens.class | Bin [31m1638[m -> [32m1650[m bytes
 .../emojournal/auth/jwt/entity/RefreshToken.class  | Bin [31m0[m -> [32m3520[m bytes
 .../auth/jwt/entity/item/OAuthProvider.class       | Bin [31m0[m -> [32m1245[m bytes
 .../filter}/JwtAuthenticationFilter.class          | Bin [31m4762[m -> [32m4784[m bytes
 .../jwt/repository/RefreshTokenRepository.class    | Bin [31m0[m -> [32m865[m bytes
 .../jwt}/service/RefreshTokenService.class         | Bin [31m2390[m -> [32m2470[m bytes
 .../jwt}/service/TokenReissueService.class         | Bin [31m3387[m -> [32m3484[m bytes
 .../auth/jwt/utils/AuthTokenGenerator.class        | Bin [31m0[m -> [32m1696[m bytes
 .../{token => jwt/utils}/JwtTokenProvider.class    | Bin [31m4147[m -> [32m4155[m bytes
 .../{ => auth/jwt/utils}/crypto/CryptoUtil.class   | Bin [31m1782[m -> [32m1812[m bytes
 .../auth/oauth/client/GoogleApiClient.class        | Bin [31m0[m -> [32m6752[m bytes
 .../auth/oauth/client/OAuthApiClient.class         | Bin [31m0[m -> [32m571[m bytes
 .../oauth/client/RequestOAuthInfoService.class     | Bin [31m0[m -> [32m3931[m bytes
 .../auth/oauth/controller/OAuthController.class    | Bin [31m0[m -> [32m8370[m bytes
 .../oauth}/dto/AuthorizationCodeRequest.class      | Bin [31m813[m -> [32m835[m bytes
 .../dto/GoogleTokenDto$GoogleTokenDtoBuilder.class | Bin [31m2843[m -> [32m2931[m bytes
 .../{ => auth/oauth}/dto/GoogleTokenDto.class      | Bin [31m3600[m -> [32m3757[m bytes
 .../emojournal/auth/oauth/dto/LoginResponse.class  | Bin [31m0[m -> [32m1219[m bytes
 .../auth/oauth/dto/OAuthLoginResult.class          | Bin [31m0[m -> [32m967[m bytes
 .../dto/OAuthTokens$OAuthTokensBuilder.class       | Bin [31m2070[m -> [32m2106[m bytes
 .../auth/{ => oauth}/dto/OAuthTokens.class         | Bin [31m2353[m -> [32m2377[m bytes
 .../dto/response}/GoogleAccessTokenResponse.class  | Bin [31m1688[m -> [32m1718[m bytes
 .../oauth/dto/response/GoogleInfoResponse.class    | Bin [31m0[m -> [32m1421[m bytes
 .../dto/response}/GoogleTokenResponse.class        | Bin [31m2254[m -> [32m2284[m bytes
 .../oauth/dto/response/OAuthLoginResponse.class    | Bin [31m0[m -> [32m1533[m bytes
 .../entity/GoogleToken$GoogleTokenBuilder.class    | Bin [31m0[m -> [32m3126[m bytes
 .../emojournal/auth/oauth/entity/GoogleToken.class | Bin [31m0[m -> [32m4016[m bytes
 .../interceptor/GoogleTokenInterceptor.class       | Bin [31m5425[m -> [32m5652[m bytes
 .../oauth/repository/GoogleTokenRepository.class   | Bin [31m0[m -> [32m830[m bytes
 .../auth/oauth/service/GoogleTokenService.class    | Bin [31m0[m -> [32m2267[m bytes
 .../auth/oauth/service/OAuthLoginService.class     | Bin [31m0[m -> [32m5166[m bytes
 .../auth/oauth/utils/GoogleLoginParams.class       | Bin [31m0[m -> [32m1801[m bytes
 .../auth/oauth/utils/OAuthInfoResponse.class       | Bin [31m0[m -> [32m310[m bytes
 .../auth/oauth/utils/OAuthLoginParams.class        | Bin [31m0[m -> [32m408[m bytes
 .../emojournal/auth/token/AuthTokenGenerator.class | Bin [31m1664[m -> [32m0[m bytes
 .../{ => client}/GoogleCalendarClient.class        | Bin [31m4157[m -> [32m4171[m bytes
 .../controller/CalendarController.class            | Bin [31m1749[m -> [32m1794[m bytes
 .../calendar/service/GoogleCalendarService.class   | Bin [31m0[m -> [32m4080[m bytes
 .../example/emojournal/config/WebMvcConfig.class   | Bin [31m1532[m -> [32m1554[m bytes
 .../emojournal/controller/MemberController.class   | Bin [31m1710[m -> [32m0[m bytes
 .../emojournal/controller/oAuthController.class    | Bin [31m7908[m -> [32m0[m bytes
 .../domain/GoogleToken$GoogleTokenBuilder.class    | Bin [31m2999[m -> [32m0[m bytes
 .../example/emojournal/domain/GoogleToken.class    | Bin [31m3893[m -> [32m0[m bytes
 .../emojournal/domain/Member$MemberBuilder.class   | Bin [31m2381[m -> [32m0[m bytes
 .../com/example/emojournal/domain/Member.class     | Bin [31m4080[m -> [32m0[m bytes
 .../example/emojournal/domain/RefreshToken.class   | Bin [31m3465[m -> [32m0[m bytes
 .../emojournal/domain/item/OAuthProvider.class     | Bin [31m1191[m -> [32m0[m bytes
 .../example/emojournal/dto/OAuthLoginResult.class  | Bin [31m921[m -> [32m0[m bytes
 .../controller/EmotionAnalysisController.class     | Bin [31m0[m -> [32m5553[m bytes
 .../emotion/dto/EmotionAnalysisRequest.class       | Bin [31m0[m -> [32m2958[m bytes
 .../emotion/dto/EmotionAnalysisResponse.class      | Bin [31m0[m -> [32m8051[m bytes
 .../emotion/gemini/GeminiApiClient.class           | Bin [31m0[m -> [32m8409[m bytes
 .../emotion/service/EmotionAnalysisService.class   | Bin [31m0[m -> [32m7287[m bytes
 .../interceptor/LoginPageInterceptor.class         | Bin [31m1171[m -> [32m0[m bytes
 .../member/controller/MemberController.class       | Bin [31m0[m -> [32m1780[m bytes
 ...emberResponseDto$MemberResponseDtoBuilder.class | Bin [31m2293[m -> [32m2335[m bytes
 .../{ => member}/dto/MemberResponseDto.class       | Bin [31m1969[m -> [32m1997[m bytes
 .../member/entity/Member$MemberBuilder.class       | Bin [31m0[m -> [32m2466[m bytes
 .../example/emojournal/member/entity/Member.class  | Bin [31m0[m -> [32m4236[m bytes
 .../exception}/MemberNotFoundException.class       | Bin [31m492[m -> [32m492[m bytes
 .../member/repository/MemberRepository.class       | Bin [31m0[m -> [32m575[m bytes
 .../emojournal/member/service/MemberService.class  | Bin [31m0[m -> [32m2432[m bytes
 .../repository/GoogleTokenRepository.class         | Bin [31m783[m -> [32m0[m bytes
 .../emojournal/repository/MemberRepository.class   | Bin [31m554[m -> [32m0[m bytes
 .../repository/RefreshTokenRepository.class        | Bin [31m592[m -> [32m0[m bytes
 .../emojournal/service/GoogleCalendarService.class | Bin [31m3899[m -> [32m0[m bytes
 .../emojournal/service/GoogleTokenService.class    | Bin [31m2097[m -> [32m0[m bytes
 .../example/emojournal/service/MemberService.class | Bin [31m2383[m -> [32m0[m bytes
 .../emojournal/service/OAuthLoginService.class     | Bin [31m4857[m -> [32m0[m bytes
 build/reports/problems/problems-report.html        |   2 [32m+[m[31m-[m
 build/resources/main/application.properties        |   9 [32m+[m[31m-[m
 .../stash-dir/LoginPageInterceptor.class.uniqueId2 | Bin [31m355[m -> [32m0[m bytes
 .../stash-dir/OAuthController.class.uniqueId0      | Bin [31m7908[m -> [32m0[m bytes
 .../stash-dir/PropertyConfig.class.uniqueId0       | Bin [31m0[m -> [32m424[m bytes
 .../RefreshTokenController.class.uniqueId1         | Bin [31m5108[m -> [32m0[m bytes
 .../RefreshTokenRepository.class.uniqueId3         | Bin [31m592[m -> [32m0[m bytes
 .../stash-dir/RefreshTokenService.class.uniqueId4  | Bin [31m2390[m -> [32m0[m bytes
 .../stash-dir/TokenReissueService.class.uniqueId5  | Bin [31m3387[m -> [32m0[m bytes
 .../tmp/compileJava/previous-compilation-data.bin  | Bin [31m55920[m -> [32m81091[m bytes
 .../example/emojournal/EmoJournalApplication.java  |   2 [32m+[m[31m-[m
 .../jwt}/controller/RefreshTokenController.java    |   8 [32m+[m[31m-[m
 .../emojournal/auth/{ => jwt}/dto/AuthTokens.java  |   2 [32m+[m[31m-[m
 .../{domain => auth/jwt/entity}/RefreshToken.java  |   3 [32m+[m[31m-[m
 .../auth/jwt/entity/item/OAuthProvider.java        |   5 [32m+[m
 .../filter}/JwtAuthenticationFilter.java           |   3 [32m+[m[31m-[m
 .../jwt}/repository/RefreshTokenRepository.java    |   6 [32m+[m[31m-[m
 .../jwt}/service/RefreshTokenService.java          |   8 [32m+[m[31m-[m
 .../jwt}/service/TokenReissueService.java          |  10 [32m+[m[31m-[m
 .../{token => jwt/utils}/AuthTokenGenerator.java   |   4 [32m+[m[31m-[m
 .../{token => jwt/utils}/JwtTokenProvider.java     |   3 [32m+[m[31m-[m
 .../{ => auth/jwt/utils}/crypto/CryptoUtil.java    |   2 [32m+[m[31m-[m
 .../auth/{ => oauth}/client/GoogleApiClient.java   |  12 [32m+[m[31m-[m
 .../auth/{ => oauth}/client/OAuthApiClient.java    |  10 [32m+[m[31m-[m
 .../client/RequestOAuthInfoService.java            |  18 [32m+[m[31m-[m
 .../oauth}/controller/OAuthController.java         |  30 [32m++[m[31m--[m
 .../oauth}/dto/AuthorizationCodeRequest.java       |   2 [32m+[m[31m-[m
 .../{ => auth/oauth}/dto/GoogleTokenDto.java       |   4 [32m+[m[31m-[m
 .../auth/{ => oauth}/dto/LoginResponse.java        |   3 [32m+[m[31m-[m
 .../{ => auth/oauth}/dto/OAuthLoginResult.java     |   5 [32m+[m[31m-[m
 .../auth/{ => oauth}/dto/OAuthTokens.java          |   2 [32m+[m[31m-[m
 .../dto/response}/GoogleAccessTokenResponse.java   |   2 [32m+[m[31m-[m
 .../dto/response}/GoogleInfoResponse.java          |   5 [32m+[m[31m-[m
 .../dto/response}/GoogleTokenResponse.java         |   2 [32m+[m[31m-[m
 .../dto/response}/OAuthLoginResponse.java          |   4 [32m+[m[31m-[m
 .../{domain => auth/oauth/entity}/GoogleToken.java |   5 [32m+[m[31m-[m
 .../oauth}/interceptor/GoogleTokenInterceptor.java |  17 [32m+[m[31m-[m
 .../oauth}/repository/GoogleTokenRepository.java   |   6 [32m+[m[31m-[m
 .../oauth}/service/GoogleTokenService.java         |  12 [32m+[m[31m-[m
 .../oauth}/service/OAuthLoginService.java          |  19 [32m+[m[31m-[m
 .../{dto => oauth/utils}/GoogleLoginParams.java    |   4 [32m+[m[31m-[m
 .../{dto => oauth/utils}/OAuthInfoResponse.java    |   4 [32m+[m[31m-[m
 .../{dto => oauth/utils}/OAuthLoginParams.java     |   4 [32m+[m[31m-[m
 .../{ => client}/GoogleCalendarClient.java         |   2 [32m+[m[31m-[m
 .../controller/CalendarController.java             |   4 [32m+[m[31m-[m
 .../service/GoogleCalendarService.java             |  15 [32m+[m[31m-[m
 .../example/emojournal/config/PropertyConfig.java  |   2 [32m+[m[31m-[m
 .../example/emojournal/config/WebMvcConfig.java    |   2 [32m+[m[31m-[m
 .../emojournal/domain/item/OAuthProvider.java      |   5 [31m-[m
 .../controller/EmotionAnalysisController.java      |  84 [32m+++++++++[m
 .../emotion/dto/EmotionAnalysisRequest.java        |  19 [32m++[m
 .../emotion/dto/EmotionAnalysisResponse.java       |  56 [32m++++++[m
 .../emojournal/emotion/gemini/GeminiApiClient.java | 196 [32m+++++++++++++++++++++[m
 .../emotion/service/EmotionAnalysisService.java    | 137 [32m++++++++++++++[m
 .../interceptor/LoginPageInterceptor.java          |  27 [31m---[m
 .../{ => member}/controller/MemberController.java  |   8 [32m+[m[31m-[m
 .../{ => member}/dto/MemberResponseDto.java        |   2 [32m+[m[31m-[m
 .../{domain => member/entity}/Member.java          |   7 [32m+[m[31m-[m
 .../entity/exception}/MemberNotFoundException.java |   2 [32m+[m[31m-[m
 .../{ => member}/repository/MemberRepository.java  |   4 [32m+[m[31m-[m
 .../{ => member}/service/MemberService.java        |  10 [32m+[m[31m-[m
 .../example/emojournal/service/TokenService.java   |  17 [31m--[m
 src/main/resources/application.properties          |   9 [32m+[m[31m-[m
 153 files changed, 662 insertions(+), 186 deletions(-)

[33mcommit 61769803c89273b887b0084f43937af0bdfea29d[m
Author: justsicklife <justsicklife@gmail.com>
Date:   Thu Jul 24 03:56:12 2025 +0900

    구글 access token DB로 옮김, 구글 캘린더 내용 가져오기 기능 추가

 .../8.14.2/executionHistory/executionHistory.bin   | Bin [31m396329[m -> [32m396329[m bytes
 .../8.14.2/executionHistory/executionHistory.lock  | Bin [31m17[m -> [32m17[m bytes
 .gradle/8.14.2/fileHashes/fileHashes.bin           | Bin [31m33197[m -> [32m34297[m bytes
 .gradle/8.14.2/fileHashes/fileHashes.lock          | Bin [31m17[m -> [32m17[m bytes
 .gradle/8.14.2/fileHashes/resourceHashesCache.bin  | Bin [31m31009[m -> [32m32335[m bytes
 .gradle/buildOutputCleanup/buildOutputCleanup.lock | Bin [31m17[m -> [32m17[m bytes
 .gradle/file-system.probe                          | Bin [31m8[m -> [32m8[m bytes
 .../emojournal/auth/client/GoogleApiClient.class   | Bin [31m5745[m -> [32m6562[m bytes
 .../auth/dto/GoogleAccessTokenResponse.class       | Bin [31m0[m -> [32m1688[m bytes
 .../emojournal/auth/token/GoogleTokenCache.class   | Bin [31m1672[m -> [32m0[m bytes
 .../auth/token/JwtAuthenticationFilter.class       | Bin [31m4762[m -> [32m4762[m bytes
 .../example/emojournal/config/WebMvcConfig.class   | Bin [31m0[m -> [32m1532[m bytes
 .../emojournal/controller/CalendarController.class | Bin [31m1701[m -> [32m1749[m bytes
 .../emojournal/controller/oAuthController.class    | Bin [31m8219[m -> [32m7908[m bytes
 .../com/example/emojournal/crypto/CryptoUtil.class | Bin [31m0[m -> [32m1782[m bytes
 ...gleRefreshToken$GoogleRefreshTokenBuilder.class | Bin [31m2916[m -> [32m0[m bytes
 .../emojournal/domain/GoogleRefreshToken.class     | Bin [31m3517[m -> [32m0[m bytes
 .../domain/GoogleToken$GoogleTokenBuilder.class    | Bin [31m0[m -> [32m2999[m bytes
 .../example/emojournal/domain/GoogleToken.class    | Bin [31m0[m -> [32m3893[m bytes
 .../dto/GoogleTokenDto$GoogleTokenDtoBuilder.class | Bin [31m0[m -> [32m2843[m bytes
 .../example/emojournal/dto/GoogleTokenDto.class    | Bin [31m0[m -> [32m3600[m bytes
 .../GoogleTokenInfo$GoogleTokenInfoBuilder.class   | Bin [31m2368[m -> [32m0[m bytes
 .../example/emojournal/dto/GoogleTokenInfo.class   | Bin [31m2704[m -> [32m0[m bytes
 .../interceptor/GoogleTokenInterceptor.class       | Bin [31m0[m -> [32m5425[m bytes
 .../interceptor/LoginPageInterceptor.class         | Bin [31m0[m -> [32m1171[m bytes
 .../repository/GoogleRefreshTokenRepository.class  | Bin [31m396[m -> [32m0[m bytes
 .../repository/GoogleTokenRepository.class         | Bin [31m0[m -> [32m783[m bytes
 .../emojournal/service/GoogleCalendarService.class | Bin [31m2622[m -> [32m3899[m bytes
 .../service/GoogleRefreshTokenService.class        | Bin [31m1197[m -> [32m0[m bytes
 .../emojournal/service/GoogleTokenService.class    | Bin [31m0[m -> [32m2097[m bytes
 build/reports/problems/problems-report.html        |   2 [32m+[m[31m-[m
 ...ojournal.calendar.GoogleCalendarClientTest.html | 165 [32m+++++++++++++++++++++[m
 build/reports/tests/test/index.html                |   8 [32m+[m[31m-[m
 .../packages/com.example.emojournal.calendar.html  |   6 [32m+[m[31m-[m
 build/test-results/test/binary/output.bin          | Bin [31m4439[m -> [32m4440[m bytes
 build/test-results/test/binary/output.bin.idx      | Bin [31m69[m -> [32m69[m bytes
 build/test-results/test/binary/results.bin         | Bin [31m2829[m -> [32m2829[m bytes
 .../stash-dir/CalendarController.class.uniqueId0   | Bin [31m1701[m -> [32m0[m bytes
 .../GoogleCalendarService.class.uniqueId1          | Bin [31m1892[m -> [32m0[m bytes
 .../stash-dir/LoginPageInterceptor.class.uniqueId2 | Bin [31m0[m -> [32m355[m bytes
 .../stash-dir/OAuthController.class.uniqueId0      | Bin [31m0[m -> [32m7908[m bytes
 .../RefreshTokenController.class.uniqueId1         | Bin [31m0[m -> [32m5108[m bytes
 .../RefreshTokenRepository.class.uniqueId3         | Bin [31m0[m -> [32m592[m bytes
 .../stash-dir/RefreshTokenService.class.uniqueId4  | Bin [31m0[m -> [32m2390[m bytes
 .../stash-dir/TokenReissueService.class.uniqueId5  | Bin [31m0[m -> [32m3387[m bytes
 .../tmp/compileJava/previous-compilation-data.bin  | Bin [31m55227[m -> [32m55920[m bytes
 .../emojournal/auth/client/GoogleApiClient.java    |  30 [32m+++[m[31m-[m
 .../auth/dto/GoogleAccessTokenResponse.java        |  21 [32m+++[m
 .../emojournal/auth/token/GoogleTokenCache.java    |  34 [31m-----[m
 .../auth/token/JwtAuthenticationFilter.java        |   3 [32m+[m[31m-[m
 .../example/emojournal/config/WebMvcConfig.java    |  20 [32m+++[m
 .../emojournal/controller/CalendarController.java  |   4 [32m+[m[31m-[m
 .../emojournal/controller/OAuthController.java     |  43 [32m+++[m[31m---[m
 .../com/example/emojournal/crypto/CryptoUtil.java  |  36 [32m+++++[m
 .../emojournal/domain/GoogleRefreshToken.java      |  42 [31m------[m
 .../com/example/emojournal/domain/GoogleToken.java |  46 [32m++++++[m
 .../com/example/emojournal/dto/GoogleTokenDto.java |  33 [32m+++++[m
 .../example/emojournal/dto/GoogleTokenInfo.java    |  21 [31m---[m
 .../interceptor/GoogleTokenInterceptor.java        |  72 [32m+++++++++[m
 .../interceptor/LoginPageInterceptor.java          |  27 [32m++++[m
 .../repository/GoogleRefreshTokenRepository.java   |   7 [31m-[m
 .../repository/GoogleTokenRepository.java          |  13 [32m++[m
 .../repository/RefreshTokenRepository.java         |   4 [32m+[m
 .../emojournal/service/GoogleCalendarService.java  |  28 [32m++[m[31m--[m
 .../service/GoogleRefreshTokenService.java         |  17 [31m---[m
 .../emojournal/service/GoogleTokenService.java     |  36 [32m+++++[m
 .../example/emojournal/service/TokenService.java   |  17 [32m+++[m
 67 files changed, 562 insertions(+), 173 deletions(-)

[33mcommit 6da7c9c53126f39ef4c03623eb1f492842ffb241[m
Author: justsicklife <justsicklife@gmail.com>
Date:   Thu Jul 17 18:49:06 2025 +0900

    conCurrentHashMap 으로 구글에서 보내준 access token 저장

 .../8.14.2/executionHistory/executionHistory.bin   | Bin [31m238841[m -> [32m396329[m bytes
 .../8.14.2/executionHistory/executionHistory.lock  | Bin [31m17[m -> [32m17[m bytes
 .gradle/8.14.2/fileHashes/fileHashes.bin           | Bin [31m31597[m -> [32m33197[m bytes
 .gradle/8.14.2/fileHashes/fileHashes.lock          | Bin [31m17[m -> [32m17[m bytes
 .gradle/8.14.2/fileHashes/resourceHashesCache.bin  | Bin [31m27677[m -> [32m31009[m bytes
 .gradle/buildOutputCleanup/buildOutputCleanup.lock | Bin [31m17[m -> [32m17[m bytes
 .gradle/file-system.probe                          | Bin [31m8[m -> [32m8[m bytes
 .idea/.gitignore                                   |   6 [32m++[m
 .../emojournal/auth/client/GoogleApiClient.class   | Bin [31m5734[m -> [32m5745[m bytes
 .../emojournal/auth/client/OAuthApiClient.class    | Bin [31m490[m -> [32m525[m bytes
 .../auth/client/RequestOAuthInfoService.class      | Bin [31m2830[m -> [32m3707[m bytes
 .../example/emojournal/auth/dto/AuthTokens.class   | Bin [31m0[m -> [32m1638[m bytes
 .../emojournal/auth/dto/GoogleInfoResponse.class   | Bin [31m1487[m -> [32m1356[m bytes
 .../emojournal/auth/dto/GoogleTokenResponse.class  | Bin [31m0[m -> [32m2254[m bytes
 .../emojournal/auth/dto/LoginResponse.class        | Bin [31m891[m -> [32m1177[m bytes
 .../emojournal/auth/dto/OAuthLoginResponse.class   | Bin [31m0[m -> [32m1447[m bytes
 .../auth/dto/OAuthTokens$OAuthTokensBuilder.class  | Bin [31m0[m -> [32m2070[m bytes
 .../example/emojournal/auth/dto/OAuthTokens.class  | Bin [31m0[m -> [32m2353[m bytes
 .../emojournal/auth/token/AccessTokenCache.class   | Bin [31m426[m -> [32m0[m bytes
 .../emojournal/auth/token/AuthTokenGenerator.class | Bin [31m1837[m -> [32m1664[m bytes
 .../example/emojournal/auth/token/AuthTokens.class | Bin [31m1952[m -> [32m0[m bytes
 .../emojournal/auth/token/GoogleTokenCache.class   | Bin [31m0[m -> [32m1672[m bytes
 .../emojournal/calendar/GoogleCalendarClient.class | Bin [31m0[m -> [32m4157[m bytes
 .../calendar/dto/GoogleCalendarEventDto$Time.class | Bin [31m0[m -> [32m1795[m bytes
 .../calendar/dto/GoogleCalendarEventDto.class      | Bin [31m0[m -> [32m2868[m bytes
 .../dto/GoogleCalendarEventListResponse.class      | Bin [31m0[m -> [32m1189[m bytes
 .../emojournal/controller/CalendarController.class | Bin [31m0[m -> [32m1701[m bytes
 .../controller/RefreshTokenController.class        | Bin [31m5112[m -> [32m5108[m bytes
 .../emojournal/controller/oAuthController.class    | Bin [31m6209[m -> [32m8219[m bytes
 .../emojournal/domain/token/GoogleTokens.class     | Bin [31m2189[m -> [32m0[m bytes
 .../GoogleTokenInfo$GoogleTokenInfoBuilder.class   | Bin [31m0[m -> [32m2368[m bytes
 .../example/emojournal/dto/GoogleTokenInfo.class   | Bin [31m0[m -> [32m2704[m bytes
 .../emojournal/service/GoogleCalendarService.class | Bin [31m0[m -> [32m2622[m bytes
 .../emojournal/service/OAuthLoginService.class     | Bin [31m4431[m -> [32m4857[m bytes
 .../emojournal/service/TokenReissueService.class   | Bin [31m3391[m -> [32m3387[m bytes
 .../java/test/com/example/emojournal/Aaa.class     | Bin [31m1020[m -> [32m0[m bytes
 .../test/classes/com.example.emojournal.Aaa.html   | 106 [31m---------------------[m
 build/reports/tests/test/index.html                |  42 [32m+++++[m[31m---[m
 ...l.html => com.example.emojournal.calendar.html} |  38 [32m+++++[m[31m---[m
 build/test-results/test/binary/output.bin          | Bin [31m33617[m -> [32m4439[m bytes
 build/test-results/test/binary/output.bin.idx      | Bin [31m36[m -> [32m69[m bytes
 build/test-results/test/binary/results.bin         | Bin [31m79[m -> [32m2829[m bytes
 .../stash-dir/CalendarController.class.uniqueId0   | Bin [31m0[m -> [32m1701[m bytes
 .../GoogleCalendarService.class.uniqueId1          | Bin [31m0[m -> [32m1892[m bytes
 .../stash-dir/OAuthLoginResult.class.uniqueId0     | Bin [31m327[m -> [32m0[m bytes
 .../tmp/compileJava/previous-compilation-data.bin  | Bin [31m54318[m -> [32m55227[m bytes
 .../stash-dir/oAuthControllerTest.class.uniqueId0  | Bin [31m1000[m -> [32m0[m bytes
 .../compileTestJava/previous-compilation-data.bin  | Bin [31m31422[m -> [32m32010[m bytes
 .../emojournal/auth/client/GoogleApiClient.java    |   8 [32m+[m[31m-[m
 .../emojournal/auth/client/OAuthApiClient.java     |   3 [32m+[m[31m-[m
 .../auth/client/RequestOAuthInfoService.java       |  19 [32m+++[m[31m-[m
 .../emojournal/auth/{token => dto}/AuthTokens.java |   7 [32m+[m[31m-[m
 .../emojournal/auth/dto/GoogleInfoResponse.java    |   3 [31m-[m
 .../dto/GoogleTokenResponse.java}                  |   7 [32m+[m[31m-[m
 .../example/emojournal/auth/dto/LoginResponse.java |   4 [32m+[m[31m-[m
 .../emojournal/auth/dto/OAuthLoginResponse.java    |  18 [32m++++[m
 .../example/emojournal/auth/dto/OAuthTokens.java   |  20 [32m++++[m
 .../emojournal/auth/token/AccessTokenCache.java    |  41 [31m--------[m
 .../emojournal/auth/token/AuthTokenGenerator.java  |  15 [32m++[m[31m-[m
 .../emojournal/auth/token/GoogleTokenCache.java    |  34 [32m+++++++[m
 .../emojournal/calendar/GoogleCalendarClient.java  |  56 [32m+++++++++++[m
 .../calendar/dto/GoogleCalendarEventDto.java       |  32 [32m+++++++[m
 .../dto/GoogleCalendarEventListResponse.java       |  14 [32m+++[m
 .../emojournal/controller/CalendarController.java  |  28 [32m++++++[m
 .../emojournal/controller/OAuthController.java     |  33 [32m+++++[m[31m--[m
 .../controller/RefreshTokenController.java         |   7 [32m+[m[31m-[m
 .../emojournal/domain/GoogleRefreshToken.java      |  10 [32m+[m[31m-[m
 .../example/emojournal/dto/GoogleTokenInfo.java    |  21 [32m++++[m
 .../emojournal/service/GoogleCalendarService.java  |  46 [32m+++++++++[m
 .../emojournal/service/OAuthLoginService.java      |  14 [32m++[m[31m-[m
 .../emojournal/service/TokenReissueService.java    |   3 [32m+[m[31m-[m
 .../calendar/GoogleCalendarClientTest.java         |  56 [32m+++++++++++[m
 72 files changed, 462 insertions(+), 229 deletions(-)

[33mcommit 2a169cac0c1a54243ad302ebe37f44db821b8024[m
Author: justsicklife <justsicklife@gmail.com>
Date:   Tue Jul 15 00:16:58 2025 +0900

    refreshToken UUID로 생성,googlerefreshToken db 에 저장

 .../8.14.2/executionHistory/executionHistory.bin   | Bin [31m151689[m -> [32m238841[m bytes
 .../8.14.2/executionHistory/executionHistory.lock  | Bin [31m17[m -> [32m17[m bytes
 .gradle/8.14.2/fileHashes/fileHashes.bin           | Bin [31m30647[m -> [32m31597[m bytes
 .gradle/8.14.2/fileHashes/fileHashes.lock          | Bin [31m17[m -> [32m17[m bytes
 .gradle/8.14.2/fileHashes/resourceHashesCache.bin  | Bin [31m25229[m -> [32m27677[m bytes
 .gradle/buildOutputCleanup/buildOutputCleanup.lock | Bin [31m17[m -> [32m17[m bytes
 .gradle/file-system.probe                          | Bin [31m8[m -> [32m8[m bytes
 .../emojournal/auth/client/GoogleApiClient.class   | Bin [31m5712[m -> [32m5734[m bytes
 .../auth/client/RequestOAuthInfoService.class      | Bin [31m2830[m -> [32m2830[m bytes
 .../emojournal/auth/token/AccessTokenCache.class   | Bin [31m0[m -> [32m426[m bytes
 .../auth/token/JwtAuthenticationFilter.class       | Bin [31m4329[m -> [32m4762[m bytes
 .../emojournal/auth/token/JwtTokenProvider.class   | Bin [31m3709[m -> [32m4147[m bytes
 .../emojournal/controller/MemberController.class   | Bin [31m1545[m -> [32m1710[m bytes
 .../emojournal/controller/oAuthController.class    | Bin [31m5470[m -> [32m6209[m bytes
 ...gleRefreshToken$GoogleRefreshTokenBuilder.class | Bin [31m0[m -> [32m2916[m bytes
 .../emojournal/domain/GoogleRefreshToken.class     | Bin [31m0[m -> [32m3517[m bytes
 .../emojournal/domain/Member$MemberBuilder.class   | Bin [31m2381[m -> [32m2381[m bytes
 .../com/example/emojournal/domain/Member.class     | Bin [31m2481[m -> [32m4080[m bytes
 .../emojournal/domain/token/GoogleTokens.class     | Bin [31m1412[m -> [32m2189[m bytes
 ...emberResponseDto$MemberResponseDtoBuilder.class | Bin [31m0[m -> [32m2293[m bytes
 .../example/emojournal/dto/MemberResponseDto.class | Bin [31m0[m -> [32m1969[m bytes
 .../example/emojournal/dto/OAuthLoginResult.class  | Bin [31m0[m -> [32m921[m bytes
 .../repository/GoogleRefreshTokenRepository.class  | Bin [31m0[m -> [32m396[m bytes
 .../service/GoogleRefreshTokenService.class        | Bin [31m0[m -> [32m1197[m bytes
 .../emojournal/service/OAuthLoginService.class     | Bin [31m4431[m -> [32m4431[m bytes
 .../emojournal/service/TokenReissueService.class   | Bin [31m3567[m -> [32m3391[m bytes
 .../java/test/com/example/emojournal/Aaa.class     | Bin [31m0[m -> [32m1020[m bytes
 .../controller/oAuthControllerTest.class           | Bin [31m1000[m -> [32m0[m bytes
 build/reports/problems/problems-report.html        |   2 [32m+[m[31m-[m
 .../test/classes/com.example.emojournal.Aaa.html   | 106 [32m++++++++++++++++++[m
 ....emojournal.controller.oAuthControllerTest.html | 123 [31m---------------------[m
 build/reports/tests/test/index.html                |  12 [32m+[m[31m-[m
 ...controller.html => com.example.emojournal.html} |  14 [32m+[m[31m--[m
 .../test/TEST-com.example.emojournal.Aaa.xml       |   8 [32m++[m
 ...e.emojournal.controller.oAuthControllerTest.xml |  25 [31m-----[m
 build/test-results/test/binary/output.bin          | Bin [31m1981[m -> [32m33617[m bytes
 build/test-results/test/binary/output.bin.idx      | Bin [31m36[m -> [32m36[m bytes
 build/test-results/test/binary/results.bin         | Bin [31m166[m -> [32m79[m bytes
 .../JwtAuthenticationFilter.class.uniqueId0        | Bin [31m4329[m -> [32m0[m bytes
 .../stash-dir/OAuthLoginResult.class.uniqueId0     | Bin [31m0[m -> [32m327[m bytes
 .../tmp/compileJava/previous-compilation-data.bin  | Bin [31m53663[m -> [32m54318[m bytes
 .../stash-dir/oAuthControllerTest.class.uniqueId0  | Bin [31m851[m -> [32m1000[m bytes
 .../compileTestJava/previous-compilation-data.bin  | Bin [31m42890[m -> [32m31422[m bytes
 .../emojournal/auth/client/GoogleApiClient.java    |   3 [32m+[m
 .../auth/client/RequestOAuthInfoService.java       |  19 [32m+++[m[31m-[m
 .../emojournal/auth/token/AccessTokenCache.java    |  41 [32m+++++++[m
 .../auth/token/JwtAuthenticationFilter.java        |   2 [32m+[m
 .../emojournal/auth/token/JwtTokenProvider.java    |   4 [32m+[m
 .../emojournal/controller/MemberController.java    |   6 [32m+[m[31m-[m
 .../emojournal/controller/OAuthController.java     |  22 [32m+++[m[31m-[m
 .../controller/RefreshTokenController.java         |   4 [32m+[m[31m-[m
 .../emojournal/domain/GoogleRefreshToken.java      |  42 [32m+++++++[m
 .../java/com/example/emojournal/domain/Member.java |  17 [32m+++[m
 .../example/emojournal/domain/RefreshToken.java    |   6 [32m+[m[31m-[m
 .../emojournal/domain/token/GoogleTokens.java      |   4 [32m+[m[31m-[m
 .../example/emojournal/dto/MemberResponseDto.java  |  18 [32m+++[m
 .../example/emojournal/dto/OAuthLoginResult.java   |  15 [32m+++[m
 .../repository/GoogleRefreshTokenRepository.java   |   7 [32m++[m
 .../service/GoogleRefreshTokenService.java         |  17 [32m+++[m
 .../emojournal/service/OAuthLoginService.java      |  11 [32m++[m
 .../emojournal/service/TokenReissueService.java    |  16 [32m+[m[31m--[m
 61 files changed, 359 insertions(+), 185 deletions(-)

[33mcommit 4719b6c846117517e53a8c7dd0827fd47188af30[m
Author: justsicklife <justsicklife@gmail.com>
Date:   Wed Jul 9 16:12:31 2025 +0900

    test 커밋

 .../8.14.2/executionHistory/executionHistory.bin   | Bin [31m151689[m -> [32m151689[m bytes
 .../8.14.2/executionHistory/executionHistory.lock  | Bin [31m17[m -> [32m17[m bytes
 .gradle/8.14.2/fileHashes/fileHashes.bin           | Bin [31m30647[m -> [32m30647[m bytes
 .gradle/8.14.2/fileHashes/fileHashes.lock          | Bin [31m17[m -> [32m17[m bytes
 .gradle/8.14.2/fileHashes/resourceHashesCache.bin  | Bin [31m24447[m -> [32m25229[m bytes
 .gradle/buildOutputCleanup/buildOutputCleanup.lock | Bin [31m17[m -> [32m17[m bytes
 .gradle/file-system.probe                          | Bin [31m8[m -> [32m8[m bytes
 .../emojournal/auth/token/AuthTokenGenerator.class | Bin [31m1837[m -> [32m1837[m bytes
 .../auth/token/JwtAuthenticationFilter.class       | Bin [31m4074[m -> [32m4329[m bytes
 .../emojournal/auth/token/JwtTokenProvider.class   | Bin [31m3709[m -> [32m3709[m bytes
 .../controller/RefreshTokenController.class        | Bin [31m3462[m -> [32m5112[m bytes
 .../emojournal/controller/oAuthController.class    | Bin [31m5478[m -> [32m5470[m bytes
 .../emojournal/service/RefreshTokenService.class   | Bin [31m1150[m -> [32m2390[m bytes
 .../emojournal/service/TokenReissueService.class   | Bin [31m2963[m -> [32m3567[m bytes
 build/reports/problems/problems-report.html        |   2 [32m+[m[31m-[m
 .../JwtAuthenticationFilter.class.uniqueId0        | Bin [31m4486[m -> [32m4329[m bytes
 .../tmp/compileJava/previous-compilation-data.bin  | Bin [31m53515[m -> [32m53663[m bytes
 .../emojournal/auth/token/AuthTokenGenerator.java  |   2 [32m+[m[31m-[m
 .../auth/token/JwtAuthenticationFilter.java        |  19 [32m+++++++++++++++[m[31m-[m
 .../emojournal/auth/token/JwtTokenProvider.java    |   1 [32m+[m
 .../emojournal/controller/OAuthController.java     |   2 [32m+[m[31m-[m
 .../controller/RefreshTokenController.java         |  25 [32m+++++++++++++++++++++[m
 .../emojournal/service/RefreshTokenService.java    |  14 [32m++++++++++++[m
 .../emojournal/service/TokenReissueService.java    |   3 [32m+++[m
 24 files changed, 64 insertions(+), 4 deletions(-)

[33mcommit 9dbbd82e8b3d3f5a2128018dec9fa0eb8e2ed93a[m
Author: justsicklife <justsicklife@gmail.com>
Date:   Fri Jul 4 11:56:49 2025 +0900

    access token 만료되면 refresh token 비교해서 access token 발급하는 기능 추가

 .../8.14.2/executionHistory/executionHistory.bin   | Bin [31m151689[m -> [32m151689[m bytes
 .../8.14.2/executionHistory/executionHistory.lock  | Bin [31m17[m -> [32m17[m bytes
 .gradle/8.14.2/fileHashes/fileHashes.bin           | Bin [31m30647[m -> [32m30647[m bytes
 .gradle/8.14.2/fileHashes/fileHashes.lock          | Bin [31m17[m -> [32m17[m bytes
 .gradle/8.14.2/fileHashes/resourceHashesCache.bin  | Bin [31m23835[m -> [32m24447[m bytes
 .gradle/buildOutputCleanup/buildOutputCleanup.lock | Bin [31m17[m -> [32m17[m bytes
 .gradle/file-system.probe                          | Bin [31m8[m -> [32m8[m bytes
 .../auth/token/JwtAuthenticationFilter.class       | Bin [31m2536[m -> [32m4074[m bytes
 .../emojournal/auth/token/JwtTokenProvider.class   | Bin [31m3642[m -> [32m3709[m bytes
 .../controller/RefreshTokenController.class        | Bin [31m2852[m -> [32m3462[m bytes
 build/reports/problems/problems-report.html        |   2 [32m+[m[31m-[m
 .../stash-dir/AuthTokenGenerator.class.uniqueId4   | Bin [31m1837[m -> [32m0[m bytes
 .../JwtAuthenticationFilter.class.uniqueId0        | Bin [31m0[m -> [32m4486[m bytes
 .../JwtAuthenticationFilter.class.uniqueId5        | Bin [31m2536[m -> [32m0[m bytes
 .../stash-dir/JwtTokenProvider.class.uniqueId0     | Bin [31m3586[m -> [32m0[m bytes
 .../stash-dir/OAuthController.class.uniqueId2      | Bin [31m5478[m -> [32m0[m bytes
 .../stash-dir/OAuthLoginService.class.uniqueId1    | Bin [31m4431[m -> [32m0[m bytes
 .../RefreshTokenController.class.uniqueId3         | Bin [31m2852[m -> [32m0[m bytes
 .../stash-dir/TokenReissueService.class.uniqueId6  | Bin [31m2963[m -> [32m0[m bytes
 .../tmp/compileJava/previous-compilation-data.bin  | Bin [31m53329[m -> [32m53515[m bytes
 .../auth/token/JwtAuthenticationFilter.java        |  49 [32m++++++++++++++++++++[m[31m-[m
 .../emojournal/auth/token/JwtTokenProvider.java    |   2 [32m+[m
 .../controller/RefreshTokenController.java         |   4 [32m++[m
 23 files changed, 55 insertions(+), 2 deletions(-)

[33mcommit 28985d9757e3eb7193f08e5ed4c5fd3ab925b842[m
Author: justsicklife <justsicklife@gmail.com>
Date:   Thu Jul 3 18:14:57 2025 +0900

    인증된 데이터 클라이언트에게 보내줌

 .../8.14.2/executionHistory/executionHistory.bin   | Bin [31m151689[m -> [32m151689[m bytes
 .../8.14.2/executionHistory/executionHistory.lock  | Bin [31m17[m -> [32m17[m bytes
 .gradle/8.14.2/fileHashes/fileHashes.bin           | Bin [31m30447[m -> [32m30647[m bytes
 .gradle/8.14.2/fileHashes/fileHashes.lock          | Bin [31m17[m -> [32m17[m bytes
 .gradle/8.14.2/fileHashes/resourceHashesCache.bin  | Bin [31m23053[m -> [32m23835[m bytes
 .gradle/buildOutputCleanup/buildOutputCleanup.lock | Bin [31m17[m -> [32m17[m bytes
 .gradle/file-system.probe                          | Bin [31m8[m -> [32m8[m bytes
 .../emojournal/auth/token/AuthTokenGenerator.class | Bin [31m2061[m -> [32m1837[m bytes
 .../auth/token/JwtAuthenticationFilter.class       | Bin [31m0[m -> [32m2536[m bytes
 .../emojournal/auth/token/JwtTokenProvider.class   | Bin [31m2864[m -> [32m3642[m bytes
 .../emojournal/controller/MemberController.class   | Bin [31m0[m -> [32m1545[m bytes
 .../emojournal/service/TokenReissueService.class   | Bin [31m2744[m -> [32m2963[m bytes
 build/reports/problems/problems-report.html        |   2 [32m+[m[31m-[m
 .../stash-dir/AuthTokenGenerator.class.uniqueId4   | Bin [31m0[m -> [32m1837[m bytes
 .../JwtAuthenticationFilter.class.uniqueId5        | Bin [31m0[m -> [32m2536[m bytes
 .../stash-dir/JwtTokenProvider.class.uniqueId0     | Bin [31m0[m -> [32m3586[m bytes
 .../stash-dir/OAuthController.class.uniqueId2      | Bin [31m0[m -> [32m5478[m bytes
 .../stash-dir/OAuthLoginService.class.uniqueId1    | Bin [31m4213[m -> [32m4431[m bytes
 .../stash-dir/RefreshToken.class.uniqueId0         | Bin [31m2872[m -> [32m0[m bytes
 ...eId2 => RefreshTokenController.class.uniqueId3} | Bin
 .../RefreshTokenRepository.class.uniqueId3         | Bin [31m592[m -> [32m0[m bytes
 .../stash-dir/RefreshTokenService.class.uniqueId4  | Bin [31m703[m -> [32m0[m bytes
 .../stash-dir/TokenReissueService.class.uniqueId5  | Bin [31m2744[m -> [32m0[m bytes
 .../stash-dir/TokenReissueService.class.uniqueId6  | Bin [31m0[m -> [32m2963[m bytes
 .../tmp/compileJava/previous-compilation-data.bin  | Bin [31m52873[m -> [32m53329[m bytes
 .../auth/token/JwtAuthenticationFilter.java        |   6 [32m++++[m[31m-[m
 .../emojournal/auth/token/JwtTokenProvider.java    |  15 [32m++++++[m[31m------[m
 .../emojournal/controller/MemberController.java    |  27 [32m+++++++++++++++++++++[m
 28 files changed, 41 insertions(+), 9 deletions(-)

[33mcommit 5bfe1b5b61dc2de053d63c741b23ee035d1fa9d6[m
Author: justsicklife <justsicklife@gmail.com>
Date:   Thu Jul 3 14:13:48 2025 +0900

    refresh token db에 저장
    필터 생성

 .../8.14.2/executionHistory/executionHistory.bin   | Bin [31m151689[m -> [32m151689[m bytes
 .../8.14.2/executionHistory/executionHistory.lock  | Bin [31m17[m -> [32m17[m bytes
 .gradle/8.14.2/fileHashes/fileHashes.bin           | Bin [31m29647[m -> [32m30447[m bytes
 .gradle/8.14.2/fileHashes/fileHashes.lock          | Bin [31m17[m -> [32m17[m bytes
 .gradle/8.14.2/fileHashes/resourceHashesCache.bin  | Bin [31m22339[m -> [32m23053[m bytes
 .gradle/buildOutputCleanup/buildOutputCleanup.lock | Bin [31m17[m -> [32m17[m bytes
 .gradle/file-system.probe                          | Bin [31m8[m -> [32m8[m bytes
 .../emojournal/auth/dto/LoginResponse.class        | Bin [31m0[m -> [32m891[m bytes
 .../emojournal/auth/token/AuthTokenGenerator.class | Bin [31m2061[m -> [32m2061[m bytes
 .../controller/RefreshTokenController.class        | Bin [31m0[m -> [32m2852[m bytes
 .../emojournal/controller/oAuthController.class    | Bin [31m4198[m -> [32m5478[m bytes
 .../emojournal/domain/Member$MemberBuilder.class   | Bin [31m2381[m -> [32m2381[m bytes
 .../com/example/emojournal/domain/Member.class     | Bin [31m2659[m -> [32m2481[m bytes
 .../example/emojournal/domain/RefreshToken.class   | Bin [31m0[m -> [32m3465[m bytes
 .../exception/member/MemberNotFoundException.class | Bin [31m0[m -> [32m492[m bytes
 .../repository/RefreshTokenRepository.class        | Bin [31m0[m -> [32m592[m bytes
 .../example/emojournal/service/MemberService.class | Bin [31m0[m -> [32m2383[m bytes
 .../emojournal/service/OAuthLoginService.class     | Bin [31m4213[m -> [32m4431[m bytes
 .../emojournal/service/RefreshTokenService.class   | Bin [31m0[m -> [32m1150[m bytes
 .../emojournal/service/TokenReissueService.class   | Bin [31m0[m -> [32m2744[m bytes
 build/reports/problems/problems-report.html        |   2 [32m+[m[31m-[m
 .../stash-dir/OAuthLoginService.class.uniqueId1    | Bin [31m0[m -> [32m4213[m bytes
 .../stash-dir/RefreshToken.class.uniqueId0         | Bin [31m0[m -> [32m2872[m bytes
 .../RefreshTokenController.class.uniqueId2         | Bin [31m0[m -> [32m2852[m bytes
 .../RefreshTokenRepository.class.uniqueId3         | Bin [31m0[m -> [32m592[m bytes
 .../stash-dir/RefreshTokenService.class.uniqueId4  | Bin [31m0[m -> [32m703[m bytes
 .../stash-dir/TokenReissueService.class.uniqueId5  | Bin [31m0[m -> [32m2744[m bytes
 .../stash-dir/oAuthController.class.uniqueId0      | Bin [31m4198[m -> [32m0[m bytes
 .../tmp/compileJava/previous-compilation-data.bin  | Bin [31m51700[m -> [32m52873[m bytes
 .../example/emojournal/auth/dto/LoginResponse.java |  12 [32m++++++[m
 .../emojournal/auth/token/AuthTokenGenerator.java  |   6 [32m+[m[31m--[m
 .../auth/token/JwtAuthenticationFilter.java        |  43 [32m+++++++++++++++++++++[m
 .../emojournal/auth/token/JwtTokenProvider.java    |  28 [32m+++++++++++[m[31m---[m
 .../emojournal/controller/OAuthController.java     |  27 [32m++++++++++[m[31m---[m
 .../controller/RefreshTokenController.java         |  33 [32m+++++++++[m[31m-------[m
 .../example/emojournal/domain/RefreshToken.java    |  30 [32m+++++++++++++[m[31m-[m
 .../exception/member/MemberNotFoundException.java  |   7 [32m++++[m
 .../repository/RefreshTokenRepository.java         |   4 [32m+[m[31m-[m
 .../example/emojournal/service/MemberService.java  |  22 [32m+++++++++++[m
 .../emojournal/service/OAuthLoginService.java      |   7 [32m+++[m[31m-[m
 .../emojournal/service/RefreshTokenService.java    |  20 [32m++++++++++[m
 .../emojournal/service/TokenReissueService.java    |  36 [32m+++++++++++++++++[m
 42 files changed, 242 insertions(+), 35 deletions(-)

[33mcommit c7dc42d6d93e3854318f7dad9edc44e78a5bf6a8[m
Author: justsicklife <justsicklife@gmail.com>
Date:   Wed Jul 2 14:02:43 2025 +0900

    리프레쉬 토큰 컨트롤러 만드는 중

 .gradle/8.14.2/checksums/checksums.lock            | Bin [31m17[m -> [32m17[m bytes
 .gradle/8.14.2/checksums/md5-checksums.bin         | Bin [31m43447[m -> [32m69015[m bytes
 .gradle/8.14.2/checksums/sha1-checksums.bin        | Bin [31m126269[m -> [32m147545[m bytes
 .../8.14.2/executionHistory/executionHistory.bin   | Bin [31m151689[m -> [32m151689[m bytes
 .../8.14.2/executionHistory/executionHistory.lock  | Bin [31m17[m -> [32m17[m bytes
 .gradle/8.14.2/fileHashes/fileHashes.bin           | Bin [31m26597[m -> [32m29647[m bytes
 .gradle/8.14.2/fileHashes/fileHashes.lock          | Bin [31m17[m -> [32m17[m bytes
 .gradle/8.14.2/fileHashes/resourceHashesCache.bin  | Bin [31m22237[m -> [32m22339[m bytes
 .gradle/buildOutputCleanup/buildOutputCleanup.lock | Bin [31m17[m -> [32m17[m bytes
 .gradle/buildOutputCleanup/outputFiles.bin         | Bin [31m19775[m -> [32m20153[m bytes
 .gradle/file-system.probe                          | Bin [31m8[m -> [32m8[m bytes
 .idea/compiler.xml                                 |   3 [32m++[m
 .../emojournal/controller/oAuthController.class    | Bin [31m2805[m -> [32m4198[m bytes
 build/reports/problems/problems-report.html        |   2 [32m+[m[31m-[m
 .../stash-dir/AuthTokenGenerator.class.uniqueId19  | Bin [31m2013[m -> [32m0[m bytes
 .../stash-dir/AuthTokenGenerator.class.uniqueId4   | Bin [31m2061[m -> [32m0[m bytes
 .../stash-dir/AuthTokens.class.uniqueId20          | Bin [31m1952[m -> [32m0[m bytes
 .../stash-dir/AuthTokens.class.uniqueId9           | Bin [31m1934[m -> [32m0[m bytes
 .../stash-dir/GoogleApiClient.class.uniqueId1      | Bin [31m5667[m -> [32m0[m bytes
 .../stash-dir/GoogleApiClient.class.uniqueId23     | Bin [31m5712[m -> [32m0[m bytes
 .../stash-dir/GoogleInfoResponse.class.uniqueId0   | Bin [31m1487[m -> [32m0[m bytes
 .../stash-dir/GoogleInfoResponse.class.uniqueId6   | Bin [31m1475[m -> [32m0[m bytes
 .../stash-dir/GoogleLoginParams.class.uniqueId16   | Bin [31m1750[m -> [32m0[m bytes
 .../stash-dir/GoogleLoginParams.class.uniqueId8    | Bin [31m1738[m -> [32m0[m bytes
 .../stash-dir/JwtTokenProvider.class.uniqueId11    | Bin [31m2864[m -> [32m0[m bytes
 .../stash-dir/JwtTokenProvider.class.uniqueId2     | Bin [31m2852[m -> [32m0[m bytes
 .../stash-dir/Member$MemberBuilder.class.uniqueId5 | Bin [31m2381[m -> [32m0[m bytes
 .../stash-dir/Member.class.uniqueId12              | Bin [31m2422[m -> [32m0[m bytes
 .../stash-dir/MemberRepository.class.uniqueId3     | Bin [31m554[m -> [32m0[m bytes
 .../stash-dir/OAuthApiClient.class.uniqueId13      | Bin [31m475[m -> [32m0[m bytes
 .../stash-dir/OAuthApiClient.class.uniqueId24      | Bin [31m490[m -> [32m0[m bytes
 .../stash-dir/OAuthInfoResponse.class.uniqueId17   | Bin [31m293[m -> [32m0[m bytes
 .../stash-dir/OAuthInfoResponse.class.uniqueId22   | Bin [31m289[m -> [32m0[m bytes
 .../stash-dir/OAuthLoginParams.class.uniqueId21    | Bin [31m391[m -> [32m0[m bytes
 .../stash-dir/OAuthLoginParams.class.uniqueId25    | Bin [31m387[m -> [32m0[m bytes
 .../stash-dir/OAuthLoginService.class.uniqueId14   | Bin [31m4130[m -> [32m0[m bytes
 .../RequestOAuthInfoService.class.uniqueId10       | Bin [31m2750[m -> [32m0[m bytes
 .../RequestOAuthInfoService.class.uniqueId15       | Bin [31m2830[m -> [32m0[m bytes
 .../stash-dir/oAuthController.class.uniqueId0      | Bin [31m0[m -> [32m4198[m bytes
 .../stash-dir/oAuthController.class.uniqueId7      | Bin [31m2781[m -> [32m0[m bytes
 .../stash-dir/oAuthService.class.uniqueId18        | Bin [31m2490[m -> [32m0[m bytes
 .../tmp/compileJava/previous-compilation-data.bin  | Bin [31m51691[m -> [32m51700[m bytes
 .../{oAuthController.java => OAuthController.java} |   2 [32m+[m[31m-[m
 .../controller/RefreshTokenController.java         |  36 [32m+++++++++++++++++++++[m
 .../java/com/example/emojournal/domain/Member.java |   3 [32m+[m[31m-[m
 .../example/emojournal/domain/RefreshToken.java    |  31 [32m++++++++++++++++++[m
 .../repository/RefreshTokenRepository.java         |   8 [32m+++++[m
 47 files changed, 81 insertions(+), 4 deletions(-)

[33mcommit 5fb4b32fd5d88684a16baf71a5482f286a99a3b1[m
Author: justsicklife <justsicklife@gmail.com>
Date:   Wed Jul 2 08:53:54 2025 +0900

    refresh token 도입 하려는 중

 .gradle/file-system.probe                          | Bin [31m8[m -> [32m8[m bytes
 .../emojournal/controller/oAuthController.java     |  30 [32m++++++++++++++++++[m[31m---[m
 .../emojournal/service/OAuthLoginService.java      |   4 [32m+[m[31m--[m
 3 files changed, 28 insertions(+), 6 deletions(-)

[33mcommit 09772a4a5e8d2f077dd3f8e792ff03758d9138af[m
Merge: df43aa4 62dddb4
Author: justsicklife <justsicklife@gmail.com>
Date:   Tue Jul 1 12:51:59 2025 +0900

    Merge branch 'master' of https://github.com/justsicklife/emojournal
    
    # Conflicts:
    #       .gradle/8.14.2/executionHistory/executionHistory.bin
    #       .gradle/8.14.2/executionHistory/executionHistory.lock
    #       .gradle/8.14.2/fileHashes/fileHashes.bin
    #       .gradle/8.14.2/fileHashes/fileHashes.lock
    #       .gradle/8.14.2/fileHashes/resourceHashesCache.bin
    #       .gradle/buildOutputCleanup/buildOutputCleanup.lock
    #       .gradle/file-system.probe
    #       build/tmp/compileJava/previous-compilation-data.bin

[33mcommit df43aa402a819e6508d497503c576cc4e109c8ab[m
Author: justsicklife <justsicklife@gmail.com>
Date:   Tue Jul 1 12:42:16 2025 +0900

    패키지 구조 리팩토링

 .../8.14.2/executionHistory/executionHistory.bin   | Bin [31m67803[m -> [32m151689[m bytes
 .../8.14.2/executionHistory/executionHistory.lock  | Bin [31m17[m -> [32m17[m bytes
 .gradle/8.14.2/fileHashes/fileHashes.bin           | Bin [31m22247[m -> [32m26597[m bytes
 .gradle/8.14.2/fileHashes/fileHashes.lock          | Bin [31m17[m -> [32m17[m bytes
 .gradle/8.14.2/fileHashes/resourceHashesCache.bin  | Bin [31m20775[m -> [32m22237[m bytes
 .gradle/buildOutputCleanup/buildOutputCleanup.lock | Bin [31m17[m -> [32m17[m bytes
 .gradle/buildOutputCleanup/outputFiles.bin         | Bin [31m19253[m -> [32m19775[m bytes
 .gradle/file-system.probe                          | Bin [31m8[m -> [32m8[m bytes
 .../emojournal/auth/client/GoogleApiClient.class   | Bin [31m0[m -> [32m5712[m bytes
 .../emojournal/auth/client/OAuthApiClient.class    | Bin [31m0[m -> [32m490[m bytes
 .../auth/client/RequestOAuthInfoService.class      | Bin [31m0[m -> [32m2830[m bytes
 .../emojournal/auth/dto/GoogleInfoResponse.class   | Bin [31m0[m -> [32m1487[m bytes
 .../emojournal/auth/dto/GoogleLoginParams.class    | Bin [31m0[m -> [32m1750[m bytes
 .../emojournal/auth/dto/OAuthInfoResponse.class    | Bin [31m0[m -> [32m293[m bytes
 .../emojournal/auth/dto/OAuthLoginParams.class     | Bin [31m0[m -> [32m391[m bytes
 .../emojournal/auth/token/AuthTokenGenerator.class | Bin [31m0[m -> [32m2061[m bytes
 .../example/emojournal/auth/token/AuthTokens.class | Bin [31m0[m -> [32m1952[m bytes
 .../emojournal/auth/token/JwtTokenProvider.class   | Bin [31m0[m -> [32m2864[m bytes
 .../emojournal/controller/oAuthController.class    | Bin [31m2781[m -> [32m2805[m bytes
 .../emojournal/domain/Member$MemberBuilder.class   | Bin [31m2381[m -> [32m2381[m bytes
 .../com/example/emojournal/domain/Member.class     | Bin [31m2422[m -> [32m2659[m bytes
 .../emojournal/service/OAuthLoginService.class     | Bin [31m4130[m -> [32m4213[m bytes
 .../emojournal/EmoJournalApplicationTests.class    | Bin [31m0[m -> [32m561[m bytes
 .../controller/oAuthControllerTest.class           | Bin [31m0[m -> [32m1000[m bytes
 ....emojournal.controller.oAuthControllerTest.html | 123 [32m++++++++++++[m
 build/reports/tests/test/css/base-style.css        | 174 [32m++++++++++++++++[m
 build/reports/tests/test/css/style.css             |  84 [32m++++++++[m
 build/reports/tests/test/index.html                | 133 [32m+++++++++++++[m
 build/reports/tests/test/js/report.js              | 218 [32m+++++++++++++++++++++[m
 .../com.example.emojournal.controller.html         | 103 [32m++++++++++[m
 ...e.emojournal.controller.oAuthControllerTest.xml |  25 [32m+++[m
 build/test-results/test/binary/output.bin          | Bin [31m0[m -> [32m1981[m bytes
 build/test-results/test/binary/output.bin.idx      | Bin [31m0[m -> [32m36[m bytes
 build/test-results/test/binary/results.bin         | Bin [31m0[m -> [32m166[m bytes
 .../stash-dir/AuthTokenGenerator.class.uniqueId19} | Bin
 .../stash-dir/AuthTokenGenerator.class.uniqueId4   | Bin [31m0[m -> [32m2061[m bytes
 .../stash-dir/AuthTokens.class.uniqueId20          | Bin [31m0[m -> [32m1952[m bytes
 .../stash-dir/AuthTokens.class.uniqueId9}          | Bin
 .../stash-dir/GoogleApiClient.class.uniqueId1}     | Bin
 .../stash-dir/GoogleApiClient.class.uniqueId23     | Bin [31m0[m -> [32m5712[m bytes
 .../stash-dir/GoogleInfoResponse.class.uniqueId0   | Bin [31m0[m -> [32m1487[m bytes
 .../stash-dir/GoogleInfoResponse.class.uniqueId6}  | Bin
 .../stash-dir/GoogleLoginParams.class.uniqueId16   | Bin [31m0[m -> [32m1750[m bytes
 .../stash-dir/GoogleLoginParams.class.uniqueId8}   | Bin
 .../stash-dir/JwtTokenProvider.class.uniqueId11    | Bin [31m0[m -> [32m2864[m bytes
 .../stash-dir/JwtTokenProvider.class.uniqueId2}    | Bin
 .../stash-dir/Member$MemberBuilder.class.uniqueId5 | Bin [31m0[m -> [32m2381[m bytes
 .../stash-dir/Member.class.uniqueId12              | Bin [31m0[m -> [32m2422[m bytes
 .../stash-dir/MemberRepository.class.uniqueId3     | Bin [31m0[m -> [32m554[m bytes
 .../stash-dir/OAuthApiClient.class.uniqueId13}     | Bin
 .../stash-dir/OAuthApiClient.class.uniqueId24      | Bin [31m0[m -> [32m490[m bytes
 .../stash-dir/OAuthInfoResponse.class.uniqueId17   | Bin [31m0[m -> [32m293[m bytes
 .../stash-dir/OAuthInfoResponse.class.uniqueId22}  | Bin
 .../stash-dir/OAuthLoginParams.class.uniqueId21    | Bin [31m0[m -> [32m391[m bytes
 .../stash-dir/OAuthLoginParams.class.uniqueId25}   | Bin
 .../stash-dir/OAuthLoginService.class.uniqueId14   | Bin [31m0[m -> [32m4130[m bytes
 .../stash-dir/PropertyConfig.class.uniqueId0       | Bin [31m540[m -> [32m0[m bytes
 .../RequestOAuthInfoService.class.uniqueId10}      | Bin
 .../RequestOAuthInfoService.class.uniqueId15       | Bin [31m0[m -> [32m2830[m bytes
 .../stash-dir/oAuthController.class.uniqueId7      | Bin [31m0[m -> [32m2781[m bytes
 .../stash-dir/oAuthService.class.uniqueId18}       | Bin
 .../tmp/compileJava/previous-compilation-data.bin  | Bin [31m51315[m -> [32m51691[m bytes
 .../stash-dir/oAuthControllerTest.class.uniqueId0  | Bin [31m0[m -> [32m851[m bytes
 .../compileTestJava/previous-compilation-data.bin  | Bin [31m0[m -> [32m42890[m bytes
 .../auth/{ => client}/GoogleApiClient.java         |   8 [32m+[m[31m-[m
 .../auth/{ => client}/OAuthApiClient.java          |   4 [32m+[m[31m-[m
 .../auth/{ => client}/RequestOAuthInfoService.java |   4 [32m+[m[31m-[m
 .../auth/{ => dto}/GoogleInfoResponse.java         |   2 [32m+[m[31m-[m
 .../auth/{ => dto}/GoogleLoginParams.java          |   2 [32m+[m[31m-[m
 .../auth/{ => dto}/OAuthInfoResponse.java          |   2 [32m+[m[31m-[m
 .../auth/{ => dto}/OAuthLoginParams.java           |   2 [32m+[m[31m-[m
 .../auth/{ => token}/AuthTokenGenerator.java       |   2 [32m+[m[31m-[m
 .../emojournal/auth/{ => token}/AuthTokens.java    |   2 [32m+[m[31m-[m
 .../auth/{ => token}/JwtTokenProvider.java         |   3 [32m+[m[31m-[m
 .../emojournal/controller/oAuthController.java     |   7 [32m+[m[31m-[m
 .../java/com/example/emojournal/domain/Member.java |   2 [32m+[m
 .../emojournal/service/OAuthLoginService.java      |   6 [32m+[m[31m-[m
 .../example/emojournal/service/oAuthService.java   |  45 [31m-----[m
 78 files changed, 889 insertions(+), 62 deletions(-)

[33mcommit 62dddb439da11ebf2349ce4a9665b48f6d915365[m
Author: justsicklife <justsicklife@gmail.com>
Date:   Tue Jul 1 12:22:48 2025 +0900

    패키지 구조 리팩토링

 .../8.14.2/executionHistory/executionHistory.bin   | Bin [31m67803[m -> [32m151689[m bytes
 .../8.14.2/executionHistory/executionHistory.lock  | Bin [31m17[m -> [32m17[m bytes
 .gradle/8.14.2/fileHashes/fileHashes.bin           | Bin [31m22247[m -> [32m25497[m bytes
 .gradle/8.14.2/fileHashes/fileHashes.lock          | Bin [31m17[m -> [32m17[m bytes
 .gradle/8.14.2/fileHashes/resourceHashesCache.bin  | Bin [31m20775[m -> [32m21795[m bytes
 .gradle/buildOutputCleanup/buildOutputCleanup.lock | Bin [31m17[m -> [32m17[m bytes
 .gradle/buildOutputCleanup/outputFiles.bin         | Bin [31m19253[m -> [32m19775[m bytes
 .gradle/file-system.probe                          | Bin [31m8[m -> [32m8[m bytes
 .../emojournal/EmoJournalApplicationTests.class    | Bin [31m0[m -> [32m561[m bytes
 .../controller/oAuthControllerTest.class           | Bin [31m0[m -> [32m1000[m bytes
 ....emojournal.controller.oAuthControllerTest.html | 123 [32m++++++++++++[m
 build/reports/tests/test/css/base-style.css        | 174 [32m++++++++++++++++[m
 build/reports/tests/test/css/style.css             |  84 [32m++++++++[m
 build/reports/tests/test/index.html                | 133 [32m+++++++++++++[m
 build/reports/tests/test/js/report.js              | 218 [32m+++++++++++++++++++++[m
 .../com.example.emojournal.controller.html         | 103 [32m++++++++++[m
 ...e.emojournal.controller.oAuthControllerTest.xml |  25 [32m+++[m
 build/test-results/test/binary/output.bin          | Bin [31m0[m -> [32m1981[m bytes
 build/test-results/test/binary/output.bin.idx      | Bin [31m0[m -> [32m36[m bytes
 build/test-results/test/binary/results.bin         | Bin [31m0[m -> [32m166[m bytes
 .../tmp/compileJava/previous-compilation-data.bin  | Bin [31m51315[m -> [32m51278[m bytes
 .../stash-dir/oAuthControllerTest.class.uniqueId0  | Bin [31m0[m -> [32m851[m bytes
 .../compileTestJava/previous-compilation-data.bin  | Bin [31m0[m -> [32m42890[m bytes
 .../auth/{ => client}/GoogleApiClient.java         |   8 [32m+[m[31m-[m
 .../auth/{ => client}/OAuthApiClient.java          |   4 [32m+[m[31m-[m
 .../auth/{ => client}/RequestOAuthInfoService.java |   4 [32m+[m[31m-[m
 .../auth/{ => dto}/GoogleInfoResponse.java         |   2 [32m+[m[31m-[m
 .../auth/{ => dto}/GoogleLoginParams.java          |   2 [32m+[m[31m-[m
 .../auth/{ => dto}/OAuthInfoResponse.java          |   2 [32m+[m[31m-[m
 .../auth/{ => dto}/OAuthLoginParams.java           |   2 [32m+[m[31m-[m
 .../auth/{ => token}/AuthTokenGenerator.java       |   2 [32m+[m[31m-[m
 .../emojournal/auth/{ => token}/AuthTokens.java    |   2 [32m+[m[31m-[m
 .../auth/{ => token}/JwtTokenProvider.java         |   3 [32m+[m[31m-[m
 .../emojournal/controller/oAuthController.java     |   7 [32m+[m[31m-[m
 .../java/com/example/emojournal/domain/Member.java |   2 [32m+[m
 .../emojournal/service/OAuthLoginService.java      |   6 [32m+[m[31m-[m
 .../example/emojournal/service/oAuthService.java   |  45 [31m-----[m
 37 files changed, 889 insertions(+), 62 deletions(-)

[33mcommit 790aceda72f3d82e3d4759fb1a1c4acc60ca1fce[m
Author: justsicklife <justsicklife@gmail.com>
Date:   Tue Jun 24 04:58:42 2025 +0900

    first commit

 .gradle/8.14.2/checksums/checksums.lock            | Bin [31m0[m -> [32m17[m bytes
 .gradle/8.14.2/checksums/md5-checksums.bin         | Bin [31m0[m -> [32m43447[m bytes
 .gradle/8.14.2/checksums/sha1-checksums.bin        | Bin [31m0[m -> [32m126269[m bytes
 .../8.14.2/executionHistory/executionHistory.bin   | Bin [31m0[m -> [32m67803[m bytes
 .../8.14.2/executionHistory/executionHistory.lock  | Bin [31m0[m -> [32m17[m bytes
 .gradle/8.14.2/fileChanges/last-build.bin          | Bin [31m0[m -> [32m1[m bytes
 .gradle/8.14.2/fileHashes/fileHashes.bin           | Bin [31m0[m -> [32m22247[m bytes
 .gradle/8.14.2/fileHashes/fileHashes.lock          | Bin [31m0[m -> [32m17[m bytes
 .gradle/8.14.2/fileHashes/resourceHashesCache.bin  | Bin [31m0[m -> [32m20775[m bytes
 .gradle/8.14.2/gc.properties                       |   0
 .gradle/buildOutputCleanup/buildOutputCleanup.lock | Bin [31m0[m -> [32m17[m bytes
 .gradle/buildOutputCleanup/cache.properties        |   2 [32m+[m
 .gradle/buildOutputCleanup/outputFiles.bin         | Bin [31m0[m -> [32m19253[m bytes
 .gradle/file-system.probe                          | Bin [31m0[m -> [32m8[m bytes
 .gradle/vcs-1/gc.properties                        |   0
 .idea/.gitignore                                   |  10 [32m+[m
 .idea/.name                                        |   1 [32m+[m
 .idea/compiler.xml                                 |  15 [32m+[m
 .idea/discord.xml                                  |  14 [32m+[m
 .idea/encodings.xml                                |   4 [32m+[m
 .idea/git_toolbox_blame.xml                        |   6 [32m+[m
 .idea/git_toolbox_prj.xml                          |  15 [32m+[m
 .idea/gradle.xml                                   |  18 [32m+[m
 .idea/jarRepositories.xml                          |  20 [32m+[m
 .idea/misc.xml                                     |  10 [32m+[m
 .idea/modules.xml                                  |   8 [32m+[m
 .idea/modules/EmoJournal.main.iml                  |   8 [32m+[m
 .idea/vcs.xml                                      |   7 [32m+[m
 HELP.md                                            |  40 [32m++[m
 README.md                                          |  86 [32m+++[m
 build.gradle                                       |  56 [32m++[m
 .../example/emojournal/EmoJournalApplication.class | Bin [31m0[m -> [32m763[m bytes
 .../emojournal/auth/AuthTokenGenerator.class       | Bin [31m0[m -> [32m2013[m bytes
 .../com/example/emojournal/auth/AuthTokens.class   | Bin [31m0[m -> [32m1934[m bytes
 .../example/emojournal/auth/GoogleApiClient.class  | Bin [31m0[m -> [32m5667[m bytes
 .../emojournal/auth/GoogleInfoResponse.class       | Bin [31m0[m -> [32m1475[m bytes
 .../emojournal/auth/GoogleLoginParams.class        | Bin [31m0[m -> [32m1738[m bytes
 .../example/emojournal/auth/JwtTokenProvider.class | Bin [31m0[m -> [32m2852[m bytes
 .../example/emojournal/auth/OAuthApiClient.class   | Bin [31m0[m -> [32m475[m bytes
 .../emojournal/auth/OAuthInfoResponse.class        | Bin [31m0[m -> [32m289[m bytes
 .../example/emojournal/auth/OAuthLoginParams.class | Bin [31m0[m -> [32m387[m bytes
 .../emojournal/auth/RequestOAuthInfoService.class  | Bin [31m0[m -> [32m2750[m bytes
 .../example/emojournal/config/ClientConfig.class   | Bin [31m0[m -> [32m661[m bytes
 .../com/example/emojournal/config/CorsConfig.class | Bin [31m0[m -> [32m1596[m bytes
 .../example/emojournal/config/PropertyConfig.class | Bin [31m0[m -> [32m529[m bytes
 .../emojournal/controller/oAuthController.class    | Bin [31m0[m -> [32m2781[m bytes
 .../emojournal/domain/Member$MemberBuilder.class   | Bin [31m0[m -> [32m2381[m bytes
 .../com/example/emojournal/domain/Member.class     | Bin [31m0[m -> [32m2422[m bytes
 .../emojournal/domain/item/OAuthProvider.class     | Bin [31m0[m -> [32m1191[m bytes
 .../emojournal/domain/token/GoogleTokens.class     | Bin [31m0[m -> [32m1412[m bytes
 .../emojournal/dto/AuthorizationCodeRequest.class  | Bin [31m0[m -> [32m813[m bytes
 .../emojournal/repository/MemberRepository.class   | Bin [31m0[m -> [32m554[m bytes
 .../emojournal/service/OAuthLoginService.class     | Bin [31m0[m -> [32m4130[m bytes
 .../example/emojournal/service/oAuthService.class  | Bin [31m0[m -> [32m2490[m bytes
 build/reports/problems/problems-report.html        | 663 [32m+++++++++++++++++++++[m
 build/resources/main/application.properties        |  34 [32m++[m
 .../stash-dir/PropertyConfig.class.uniqueId0       | Bin [31m0[m -> [32m540[m bytes
 .../tmp/compileJava/previous-compilation-data.bin  | Bin [31m0[m -> [32m51315[m bytes
 gradle/wrapper/gradle-wrapper.jar                  | Bin [31m0[m -> [32m43764[m bytes
 gradle/wrapper/gradle-wrapper.properties           |   7 [32m+[m
 gradlew                                            | 251 [32m++++++++[m
 gradlew.bat                                        |  94 [32m+++[m
 settings.gradle                                    |   1 [32m+[m
 .../example/emojournal/EmoJournalApplication.java  |  13 [32m+[m
 .../emojournal/auth/AuthTokenGenerator.java        |  33 [32m+[m
 .../com/example/emojournal/auth/AuthTokens.java    |  23 [32m+[m
 .../example/emojournal/auth/GoogleApiClient.java   |  96 [32m+++[m
 .../emojournal/auth/GoogleInfoResponse.java        |  37 [32m++[m
 .../example/emojournal/auth/GoogleLoginParams.java |  34 [32m++[m
 .../example/emojournal/auth/JwtTokenProvider.java  |  50 [32m++[m
 .../example/emojournal/auth/OAuthApiClient.java    |  12 [32m+[m
 .../example/emojournal/auth/OAuthInfoResponse.java |  12 [32m+[m
 .../example/emojournal/auth/OAuthLoginParams.java  |   9 [32m+[m
 .../emojournal/auth/RequestOAuthInfoService.java   |  33 [32m+[m
 .../example/emojournal/config/ClientConfig.java    |  15 [32m+[m
 .../com/example/emojournal/config/CorsConfig.java  |  19 [32m+[m
 .../example/emojournal/config/PropertyConfig.java  |   9 [32m+[m
 .../emojournal/controller/oAuthController.java     |  37 [32m++[m
 .../java/com/example/emojournal/domain/Member.java |  33 [32m+[m
 .../emojournal/domain/item/OAuthProvider.java      |   5 [32m+[m
 .../emojournal/domain/token/GoogleTokens.java      |  33 [32m+[m
 .../emojournal/dto/AuthorizationCodeRequest.java   |  14 [32m+[m
 .../emojournal/repository/MemberRepository.java    |  10 [32m+[m
 .../emojournal/service/OAuthLoginService.java      |  47 [32m++[m
 .../example/emojournal/service/oAuthService.java   |  45 [32m++[m
 src/main/resources/application.properties          |  34 [32m++[m
 .../emojournal/EmoJournalApplicationTests.java     |  13 [32m+[m
 87 files changed, 2036 insertions(+)
