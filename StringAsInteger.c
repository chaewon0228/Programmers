#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    int answer = 0;
    answer = atoi(s); //atoi(str)는 문자열을 정수로 바꾸는 함수이다
    return answer;
}

int main() {
    printf("solution함수의 반환값은 %d \n", solution("1234"));
    printf("solution함수의 반환값은 %d \n", solution("-1234"));
    return 0;
}
