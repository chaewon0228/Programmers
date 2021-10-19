#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a[], size_t a_len, int b[], size_t b_len) {
    int answer = 0;
    for (int i = 0; i < a_len; i++) {
        answer += a[i] * b[i];
    }
    return answer;
}
int main() {
    int a[] = { 1, 2, 3, 4 };
    int a_len = sizeof(a) / sizeof(int);
    int b[] = { -3, -1, 0, 2 };
    int b_len = sizeof(b) / sizeof(int);
    
    printf("a[1, 2, 3, 4], b[-3, -1, 0, 2] => %d\n", solution(a, a_len, b, b_len));
    return 0;
}
