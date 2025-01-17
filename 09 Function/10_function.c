#include <stdio.h>
#include <math.h>

void calculate_power(int x, int y) {
    if (x < 0 || y < 0) {
        printf("Inputs must be non-negative.\n");
        return;
    }
    double result = pow(x, y);
    printf("%d to the power %d is %.0lf\n", x, y, result);
}

int main() {
    calculate_power(3, 4);
    calculate_power(10, 3);
    calculate_power(-2, 3);
    return 0;
}