#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* s) {
    char* answer = (char*)malloc(strlen(s) * sizeof(char)); //answer ���� �Ҵ�
    int len = strlen(s); //s ���ڿ��� ���� ����
    for (int i = 0; i < len; i++) {
        answer[i] = NULL;
    }
    if (len % 2 == 0) {
        answer[1] = s[len / 2 - 1]; //���̰� ¦���� ��� ��� �� ���� ����
        answer[0] = s[len / 2];
    }
    else {
        answer[0] = s[len / 2]; //Ȧ���� ��� �� ���� ����
    }
    return answer;
}
int main() {
    char s[] = "abcde";
    printf("��� ���� %s ��ȯ �Ϸ�!\n", solution(s));
    return 0;
}