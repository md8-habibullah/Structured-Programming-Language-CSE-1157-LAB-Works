#include <stdio.h>

int main() {
    char input;

    while (1) {
        input = getchar();   // scanf() dia kora jasse na, maybe for "char", SIR will explain more in class
        if (input == 'A') {
            break;
        }
        printf("Input: %c\n", input);
    }

    return 0;
}
