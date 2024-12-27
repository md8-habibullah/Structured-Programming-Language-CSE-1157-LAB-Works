#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int max_index = 0;
    int min = arr[0];
    int min_index = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            max_index = i;
        }

        if (arr[i] < min)
        {
            min = arr[i];
            min_index = i;
        }
    }

    printf("Max: %d, Index: %d\n", max, max_index);
    printf("Min: %d, Index: %d\n", min, min_index);

    return 0;
}