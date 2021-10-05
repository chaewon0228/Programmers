#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int a, int b) {
    char* week[] = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    char* answer = (char*)malloc(sizeof(week));
    int sum_day = 0;
    int final_day[20] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for(int i = 0 ; i < a-1 ; i++ ){
        sum_day += final_day[i];
    }
    sum_day += b-1;
    answer = week[sum_day%7];
    return answer;
}
int main(){
    printf("5월 24일은 %s입니다!\n", solution(5, 24));
    return 0;
}
