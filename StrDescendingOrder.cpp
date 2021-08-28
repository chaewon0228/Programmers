#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(strlen(s) * sizeof(char));
    strcpy(answer, s);
    char b;
    for (int i = 0; i < strlen(s); i++) {
        for (int j = i; j < strlen(s); j++) {
            if (answer[i] < answer[j]) {
                b = answer[i];
                answer[i] = answer[j];
                answer[j] = b;
            }
        }
    }
    return answer;
}
int main() {
    printf("Zbcdefg의 내림차수 정렬의 값은 %s 입니다.\n", solution("Zbcdefg"));
    return 0;
}