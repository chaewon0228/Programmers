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
    printf("10�� x�� ���� �������� 1�� ���� ���� x�� ���� %d\n", solution(10));
    printf("12�� x�� ���� �������� 1�� ���� ���� x�� ���� %d\n", solution(12));
    return 0;
}