#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
    
    return 0;
}
