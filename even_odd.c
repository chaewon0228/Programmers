#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int num) {
    char* answer = (char*)malloc(sizeof(char) * 5);

    if (num % 2 == 0) answer = "Even";
    else answer = "Odd";

    return answer;
}

int main() {

    printf("%d�� %s �Դϴ�. \n", 3, solution(3));
    printf("%d�� %s �Դϴ�. \n", 4, solution(4));

    return 0;
}