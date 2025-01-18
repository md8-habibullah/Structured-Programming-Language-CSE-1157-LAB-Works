#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int arr[n][n];
    int i, j;

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%1d", &arr[i][j]);
        }
    }

    printf("Major diagonal: ");
    for (i = 0; i < n; i++) {
        printf("%d", arr[i][i]);
    }
    printf("\nMinor diagonal: ");
    for (i = 0; i < n; i++) {
        printf("%d", arr[i][n - 1 - i]);
    }
    printf("\n");

    return 0;
}