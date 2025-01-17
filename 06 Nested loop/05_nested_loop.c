#include <stdio.h>

int main()
{
    int num = 3;
    scanf("%d", &num);

    for (int i = num; i >= 1; i--)
    {
        for (int j = num; j >= 1; j--)
        {

            if (j >= i)
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