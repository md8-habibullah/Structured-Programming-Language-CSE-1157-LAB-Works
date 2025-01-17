#include <stdio.h>

int main()
{
    int num = 3;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {

            if (j <= i)
            {
                printf("%d", j);
            }
            // else {
            //     printf("_");
            // }
        }
        printf("\n");
    }

    return 0;
}