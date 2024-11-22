#include <stdio.h>

int main() {
    int num;

    printf("Enter a positive non-zero integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Invalid input. Please enter a positive non-zero integer.\n");
    } else if ((num & (num - 1)) == 0) {
        printf("Yes \n");
    } else {
        printf("No \n");
    }

    return 0;
}