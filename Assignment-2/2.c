#include <stdio.h>

#define PI 3.14

int main() {
    float a;
    printf("Enter radius: ");
    scanf("%f", &a);
    
    float circumference = 2 * PI * a;
    printf("Area: %.2f\n", circumference);
    
    return 0;
}
