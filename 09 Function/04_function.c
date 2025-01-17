#include <stdio.h>

void check_positive_negative_zero(int num) {
    if (num > 0) {
        printf("positive\n");
    } else if (num < 0) {
        printf("negative\n");
    } else {
        printf("zero\n");
    }
}

int main() {
    int input1 = 3;
    int input2 = -5;
    int input3 = 0;

    check_positive_negative_zero(input1);
    check_positive_negative_zero(input2);
    check_positive_negative_zero(input3);

    return 0;
}