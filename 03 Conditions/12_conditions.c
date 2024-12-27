#include <stdio.h>

int main() {
    float a, b, result;
    int choice;

    printf("Enter two real numbers (a and b): ");
    scanf("%f %f", &a, &b);

    printf("Enter your choice:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division (quotient)\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = a + b;
            printf("Addition: %.2f\n", result);
            break;
        case 2:
            result = a - b;
            printf("Subtraction: %.2f\n", result);
            break;
        case 3:
            result = a * b;
            printf("Multiplication: %.2f\n", result);
            break;
        case 4:
            if (b != 0) {
                result = a / b;
                printf("Quotient: %.2f\n", result);
            } else {
                printf("Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}