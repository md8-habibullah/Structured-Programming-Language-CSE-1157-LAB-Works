#include <stdio.h>
#include <math.h>

int fact(int n) {
    int f = 1; 
    for (; n; n--) f *= n; 
    return f;
}

int main() {
    float x, s = 0, t;
    scanf("%f", &x);
    for (int i = 1, j = 1; fabs(t = pow(x, 2 * i - 1) / fact(2 * i - 1)) > 1e-4; i++, j = -j) s += j * t;
    printf("%.3f\n", s);
    return 0;
}