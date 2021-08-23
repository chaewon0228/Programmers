#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len�� �迭 arr�� �����Դϴ�.
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
    printf("�迭 [1, 2, 3, 4]�� ��հ� : %.2f\n", solution(arr, arr_len));
    
    int arr2[2] = { 5,5 };
    arr_len = 2;
    printf("�迭 [5, 5]�� ��հ� : %.2f\n", solution(arr2, arr_len));

    return 0;
}