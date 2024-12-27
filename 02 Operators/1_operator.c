#include <stdio.h>

int main() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    
    printf("Addition: %.2f\n", a + b);
    printf("Subtraction: %.2f\n", a - b);
    printf("Multiplication: %.2f\n", a * b);
    printf("Quotient: %.2f\n", a / b);
    printf("Reminder: %.2f\n", (int)a % (int)b);
    
    return 0;
}
