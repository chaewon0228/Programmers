#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* s) {
    char* answer = (char*)malloc(1 * strlen(s) + 1);
    strcpy(answer, s);
    bool odd = true;

    for (int i = 0; i < strlen(s); i++) {
        if (answer[i] == ' ') {
            odd = true;
            continue;
        }
        if (odd) answer[i] = toupper(answer[i]);
        else answer[i] = tolower(answer[i]);
        odd = false;
    }
    return answer;
}
int main() {
    printf("try hello world-> %s\n", solution("try hello world"));
    return 0;
}