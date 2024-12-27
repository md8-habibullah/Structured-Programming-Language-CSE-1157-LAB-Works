#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d", &n);

    int arrA[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arrA[i]);
    }

    scanf("%d", &m);

    int arrB[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arrB[i]);
    }

    int unionArray[n + m];
    int unionSize = 0;

    for (int i = 0; i < n; i++)
    {
        unionArray[unionSize++] = arrA[i];
    }

    for (int i = 0; i < m; i++)
    {
        int found = 0;
        for (int j = 0; j < unionSize; j++)
        {
            if (arrB[i] == unionArray[j])
            {
                found = 1;
                break;
            }
        }
        if (!found)
        {
            unionArray[unionSize++] = arrB[i];
        }
    }

    for (int i = 0; i < unionSize; i++)
    {
        printf("%d", unionArray[i]);
    }
    printf("\n");

    return 0;
}