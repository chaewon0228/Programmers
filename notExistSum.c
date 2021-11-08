#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*
int solution(int numbers[], size_t numbers_len) {
    int answer = 0;
    bool tt[10] = { false, };
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < numbers_len; j++) {
            if (i == numbers[j]) tt[i] = true;
        }
    }
    for (int i = 0; i < 10; i++) {
        if (tt[i] == false) answer += i;
    }
    return answer;
}
*/

int solution(int numbers[], size_t numbers_len) {
    int answer = 0;

    for(int i=0; i<numbers_len; i++){
        answer += numbers[i];
    }
    return 45 - answer;
}

int main() {
    int numbers[] = { 1,2,3,4,6,7,8,0 };
    int numbers_len = 8;
    printf("[1,2,3,4,6,7,8,0] => %d", solution(numbers, numbers_len));
    return 0;
}
