#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

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
