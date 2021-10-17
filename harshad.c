#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    int sum = 0, a = x;
    while (x) {
        sum += x % 10;
        x /= 10;
    }
    if (a % sum == 0) return true;
    return false;
}
int main() {
    printf("arr  return");
    printf("10  %B\n", solution(10));
    printf("12  %B\n", solution(12));
    printf("11  %B\n", solution(11));
    printf("13  %B\n", solution(13));
    return 0;
}