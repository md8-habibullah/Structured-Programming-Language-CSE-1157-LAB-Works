#include <stdio.h>

int main()
{
    int num = 7;
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        for (int j = num; j >= 1; j--)
        {

            if (j <= i)
            {
                printf("%d", i);
            }
            else
            {
                printf("_");
            }
        }
        printf("\n");
    }

    return 0;
}