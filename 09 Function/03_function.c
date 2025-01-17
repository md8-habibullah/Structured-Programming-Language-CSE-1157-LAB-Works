#include <stdio.h>

void check_even_odd(int num) {
    if (num % 2 == 0) {
        printf("even\n");
    } else {
        printf("odd\n");
    }
}

int main() {
    int input1 = 3;
    int input2 = 8;

    check_even_odd(input1);
    check_even_odd(input2);

    return 0;
}