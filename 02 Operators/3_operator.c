#include <stdio.h>

int main() {
    float a, b, c;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    
    c = (3.31 * a * a + 2.01 * b * b * b) / (7.16 * b * b + 2.01 * a * a * a);
    printf("X = %.6f\n", c);
    
    return 0;
}
