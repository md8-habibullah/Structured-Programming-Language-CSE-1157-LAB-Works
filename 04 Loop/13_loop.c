#include <stdio.h>

int main() {
    int n, i, fact = 1;
    scanf("%d", &n);

    if (n < 0) {
        printf("Error\n");
    } else {
        for (i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("%d! = %d\n", n, fact);
    }

    return 0;
}