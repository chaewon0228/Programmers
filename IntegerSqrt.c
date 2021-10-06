#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

long long solution(long long n) {
    long long answer = 0;
    if ((int)sqrt(n) == sqrt(n)) {
        answer = (long)pow(sqrt(n) + 1, 2);
        return answer;
    }
    return -1;
}
int main() {
    printf("121? (x+1)^2 : %d\n", solution(121));
    printf("3? (x+1)^2 : %d\n", solution(3));
    return 0;
}
