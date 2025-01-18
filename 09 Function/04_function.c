#include <stdio.h>

void number_sign(int num) {
    if (num > 0) {
        printf("positive\n");
    } else if (num < 0) {
        printf("negative\n");
    } else {
        printf("zero\n");
    }
}

int main() {
    number_sign(3);
    number_sign(-5);
    number_sign(0);
    return 0;
}