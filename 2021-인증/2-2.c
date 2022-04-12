#include <stdio.h>

int main() {
    char c;
    int first = 0;  // 1이면 최초 글자 소문자, 2이면 최초 글자 대문자
    int big = 0;    // 대문자로만 이루어져있으면 0, 소문자가 하나라도 있으면 1
    int small = 0;  // 소문자로만 이루어져있으면 0, 문자가 하나라도 있으면 1대

    char max_small, min_big;    //가장 나중 소문자, 가장 빠른 대문자
    while (1) {
        scanf("%c", &c);
        if (c >= 'a' && c <= 'z') big = 1;  //소문자가 하나라도 나오면 big 1로 바꿔주기
        if (c >= 'A' && c <= 'Z') small = 1;    //대문자가 하나라도 나오면 small 1로 바꿔주기
        if (c == '0') break;    // 0이 나올시 종료
        if (first == 0) {   // 맨 처음
            if (c >= 'a' && c <= 'z') first = 1;
            else if (c >= 'A' && c <= 'Z') first = 2;

            // 초기값 맨 첫 문자로 설정
            max_small = c;
            min_big = c;
        }
        // 어차피 소문자 아스키코드가 대문자보다 무조건 크기 때문에 굳이 구분 ㄴ
        if (max_small < c) max_small = c;
        if (min_big > c) min_big = c;
    }

    // 대문자 or 소문자로만 이루어져 있는 경우
    if (big == 0) printf("%c\n", min_big);
    if (small == 0) printf("%c\n", max_small);

    // 혼합된 경우
    if (big != 0 && small != 0) {
        // 첫 문자가 소문자
        if (first == 1) printf("%c%c", max_small, min_big);
        // 첫 문자가 대문자
        else if (first == 2) printf("%c%c", min_big, max_small);
    }


    return 0;
}
/*
 * wertypikdlfavmzn0
 */