#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) answer += i;
    }
    return answer;
}
int main() {
    printf("12�� ��� �� : %d\n", solution(12));
    printf("5�� ��� �� : %d\n", solution(5));
	return 0;
}