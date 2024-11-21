#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, e, f;
    printf("Enter coefficients: ");
    scanf("%f %f %f", &a, &b, &c);
    
    d = b * b - 4 * a * c;
    
    if (d > 0) {
        e = (-b + sqrt(d)) / (2 * a);
        f = (-b - sqrt(d)) / (2 * a);
        printf("Roots: %.2f, %.2f\n", e, f);
    } else if (d == 0) {
        e = -b / (2 * a);
        printf("Root: %.2f\n", e);
    } else {
        printf("Imaginary\n");
    }
    
    return 0;
}
