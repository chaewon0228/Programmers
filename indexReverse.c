#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    int* answer = (int*)malloc(12 * sizeof(int));
    int i = 0;
    while (n != 0) {
        answer[i] = n % 10;
        printf("%d, ", answer[i]);
        n /= 10;
        i++;
    }
    return answer;
}
int main() {
    printf("문자열 12345를 뒤집어 저장한 배열은 [");
    solution(12345);
    printf("]\n");
    return 0;
}