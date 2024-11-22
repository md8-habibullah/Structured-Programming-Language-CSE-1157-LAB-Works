#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;

    printf("Enter an Expression in the format '<number1> <operator> <number2>': ");
    scanf("%f %c %f", &num1, &operator, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Addition: %f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Subtraction: %f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Multiplication: %f\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Division: %f\n", result);
            } else {
                printf("Division: Zero as divisor is not valid!\n");
            }
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}