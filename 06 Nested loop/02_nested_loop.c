#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = i + 1; j <= n + i; j++) {
            printf("%d", j % n + 1);
        }
        printf("\n");
    }
    return 0;
}