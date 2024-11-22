#include <stdio.h>

int main() {
    float a, b, result;
    int choice, caseChoice;

    printf("Enter two real numbers (a and b): ");
    scanf("%f %f", &a, &b);

    printf("Enter your choice:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
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
                printf("Enter your choice:\n");
                printf("1. Quotient\n");
                printf("2. Remainder\n");
                scanf("%d", &caseChoice);

                if (caseChoice == 1) {
                    result = a / b;
                    printf("Quotient: %.2f\n", result);
                } else if (caseChoice == 2) {
                    result = (int)a % (int)b;
                    printf("Remainder: %d\n", (int)result);
                } else {
                    printf("Invalid choice for division.\n");
                }
            } else {
                printf("Error: Divisor is zero\n");
                return 101;
            }
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}