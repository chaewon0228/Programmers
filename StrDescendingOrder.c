#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
char* solution(const char* s) {
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
    printf("Zbcdefg의 내림차순은 %s 입니다.\n", solution("Zbcdefg"));
    return 0;
}
