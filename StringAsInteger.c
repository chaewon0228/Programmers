#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
int solution(const char* s) {
    int answer = 0;
    answer = atoi(s);
    return answer;
}

int main() {
    printf("solution�Լ��� ��ȯ���� %d \n", solution("1234"));
    printf("solution�Լ��� ��ȯ���� %d \n", solution("-1234"));
    return 0;
}