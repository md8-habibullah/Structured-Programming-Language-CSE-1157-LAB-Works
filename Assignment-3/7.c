#include <stdio.h>

int main() {
    int X, Y;

    printf("Enter two numbers (X and Y): ");
    scanf("%d %d", &X, &Y);

    if (X > Y) {
        printf("%d is greater than %d\n", X, Y);
    } else if (X < Y) {
        printf("%d is less than %d\n", X, Y);
    } else {
        printf("%d is equal to %d\n", X, Y);
    }

    return 0;
}