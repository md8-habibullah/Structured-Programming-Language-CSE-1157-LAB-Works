#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n / 2; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("Z");
        }
        printf("\n");
    }

    for (int i = 1; i <= n; i++)
    {
        printf("Z");
    }
    printf("\n");

    for (int i = n / 2; i >= 1; i--)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("Z");
        }
        printf("\n");
    }

    return 0;
}