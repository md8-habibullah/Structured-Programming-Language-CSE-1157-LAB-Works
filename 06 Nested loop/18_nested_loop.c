#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n / 2; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n - 2 * i + 1; j++)
        {
            printf("H");
        }
        printf("\n");
    }

    for (int i = 1; i <= n; i++)
    {
        printf("H");
    }
    printf("\n");

    for (int i = n / 2; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n - 2 * i + 1; j++)
        {
            printf("H");
        }
        printf("\n");
    }

    return 0;
}