#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(char* phone_number) {
    char* answer = (char*)malloc(12);
    for (int i = 0; i < strlen(phone_number); i++) {
        answer[i] = phone_number[i];
    }
    for (int i = 0; i < strlen(phone_number) - 4; i++) {
        answer[i] = '*';
    }
    answer[strlen(phone_number)] = NULL;
    return answer;
}
int main() {
    printf("%s\n", solution("01033334444"));
    printf("%s\n", solution("027778888"));
    return 0;
}