#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// absolutes_len은 배열 absolutes의 길이입니다.
// signs_len은 배열 signs의 길이입니다.
int solution(int absolutes[], size_t absolutes_len, bool signs[], size_t signs_len) {
    int answer = 0;
    for (int i = 0; i < absolutes_len; i++) {
        if (!signs[i]) absolutes[i] *= -1;
        answer += absolutes[i];
    }
    return answer;
}
int main() {
    int absolutes[] = {4, 7, 12};
    int absolutes_len = sizeof(absolutes) / sizeof(int);
    bool signs[] = { true, false, true };
    int signs_len = sizeof(signs) / sizeof(bool);
    printf("[4, 7, 12] - [true, false, true] => ");
    printf("%d\n", solution(absolutes, absolutes_len, signs, signs_len));
    return 0;
}