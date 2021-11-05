#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int price, int money, int count) {
    long long result = money;
    for(int i = 1; i <= count; i++)
        result -= price * i;
    if(result >= 0) return 0;
    return result *= -1;
}
int main(){
    int price = 3;
    int money = 20; 
    int count = 4;
    printf("이용료 : %d, %d번 탔을 경우 부족한 금액은 %d이다.", price, count, money, solution(price, money, count));
    return 0;
}
