#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int n) {
    char* answer = (char*)malloc((sizeof(char) * n * 3));

    strcpy(answer, "");

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            strcat(answer, "¼ö");
        else
            strcat(answer, "¹Ú");
    }

    return answer;
}

int main() {
    printf("%s\n", solution(3));
    printf("%s\n", solution(4));
    return 0;
}
