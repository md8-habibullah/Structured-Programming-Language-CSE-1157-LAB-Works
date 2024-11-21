#include <stdio.h>

int main() {
    int inttt;
    float floattt;
    char charrr;

    printf("Enter an integer value: ");
    scanf("%d", &inttt);

    printf("Enter a floating point value: ");
    scanf("%f", &floattt);

    printf("Enter a character value: ");
    scanf(" %c", &charrr);

    printf("The integer value: %d\n", inttt);
    printf("The floating point value: %f\n", floattt);
    printf("The character value: %c\n", charrr);

    return 0;
}