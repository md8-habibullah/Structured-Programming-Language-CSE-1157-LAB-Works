#include <stdio.h>

int main() {
    int n, i;
    float num, sum = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        scanf("%f", &num);
        sum += num;
    }

    float AVG = sum / n;

    printf("AVG of %d inputs: %f\n", n, AVG);

    return 0;
}