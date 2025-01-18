#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--) {
        for (j = i; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}