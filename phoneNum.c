#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(char* phone_number) {
    char* answer = (char*)malloc(1);
    strcpy(answer, phone_number);
    for (int i = 0; i < strlen(phone_number) - 4; i++) {
        answer[i] = '*';
    }
    return answer;
}
int main() {
    printf("%s\n", solution("01033334444"));
    printf("%s\n", solution("027778888"));
    return 0;
}