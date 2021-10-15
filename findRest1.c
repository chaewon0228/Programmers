#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0, i = 2;
    while (i < n) {
        if (n % i == 1) return i;
        i++;
    }
}
int main() {
    printf("10을 x로 나눈 나머지가 1인 가장 작은 x의 값은 %d\n", solution(10));
    printf("12을 x로 나눈 나머지가 1인 가장 작은 x의 값은 %d\n", solution(12));
    return 0;
}