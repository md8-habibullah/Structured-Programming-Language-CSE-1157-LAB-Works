#include <stdio.h>

int main()
{
    int arr[3][3];
    int i, j;

    printf("Enter 9 integers: ");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%1d", &arr[i][j]);
        }
    }

    printf("\nMatrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}