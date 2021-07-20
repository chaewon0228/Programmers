#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* s) {
    char* answer = (char*)malloc(strlen(s) * sizeof(char)); //answer 동적 할당
    int len = strlen(s); //s 문자열의 길이 저장
    for (int i = 0; i < len; i++) {
        answer[i] = NULL;
    }
    if (len % 2 == 0) {
        answer[1] = s[len / 2 - 1]; //길이가 짝수일 경우 가운데 두 글자 저장
        answer[0] = s[len / 2];
    }
    else {
        answer[0] = s[len / 2]; //홀수일 경우 한 글자 저장
    }
    return answer;
}
int main() {
    char s[] = "abcde";
    printf("가운데 글자 %s 반환 완료!\n", solution(s));
    return 0;
}