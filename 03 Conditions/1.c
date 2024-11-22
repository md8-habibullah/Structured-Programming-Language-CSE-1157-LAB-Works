#include <stdio.h>

int main() {
    float num;

    printf("Enter a number: ");
    scanf("%f", &num);

    if (num >= 0) {
        printf("Positive.\n");
    } else {
        printf("Negative.\n");
    }

    return 0;
}