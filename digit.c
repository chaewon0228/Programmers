#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    while (n) {
        answer += n % 10;
        n /= 10;
    }
    return answer;
}
int main() {
    int num1 = 123;
    printf("num1 = %d\n", solution(num1));
    int num2 = 987;
    printf("num2 = %d\n", solution(num2));
    return 0;
}