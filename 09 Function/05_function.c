#include <stdio.h>

void compare_numbers(int num1, int num2) {
    if (num1 > num2) {
        printf("%d is greater than %d\n", num1, num2);
    } else if (num1 < num2) {
        printf("%d is less than %d\n", num1, num2);
    } else {
        printf("%d is equal to %d\n", num1, num2);
    }
}

int main() {
    compare_numbers(5, 4);
    compare_numbers(2, 6);
    compare_numbers(8, 8);
    return 0;
}