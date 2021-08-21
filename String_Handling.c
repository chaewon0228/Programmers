#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 문자열 s의 길이가 4 혹은 6이고, 숫자로만 구성돼있는지 확인해주는 함수, solution을 완성하세요. 

bool solution(const char* s) {
    bool result = true;
    if (strlen(s) != 4 && strlen(s) != 6) result = false;
    for (int i = 0; i < strlen(s); i++) {
        if (!(s[i] >= '0' && s[i] <= '9')) result = false;
    }
    return result;
}

int main() {
    solution("a1234");
    solution("1234");
    return 0;
}