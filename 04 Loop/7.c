#include <stdio.h>

int main() {
    char input;

    while (1) {
        input = getchar();
        if (input == 'A') {
            break;
        }
        printf("Input: %c\n", input);
    }

    return 0;
}
