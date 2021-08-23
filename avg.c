#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
double solution(int arr[], int arr_len) {
    double answer = 0;
    int sum = 0;
    for (int i = 0; i < arr_len; i++) {
        sum += arr[i];
    }
    answer = (double)sum / arr_len;
    return answer;
}

int main() {
    int arr[4] = { 1,2,3,4 };
    int arr_len = 4;
    printf("배열 [1, 2, 3, 4]의 평균값 : %.2f\n", solution(arr, arr_len));
    
    int arr2[2] = { 5,5 };
    arr_len = 2;
    printf("배열 [5, 5]의 평균값 : %.2f\n", solution(arr2, arr_len));

    return 0;
}