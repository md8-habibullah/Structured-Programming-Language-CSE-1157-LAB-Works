#include <stdio.h>

int main()
{
    int m, n;
    printf("Enter m and n: ");
    scanf("%d %d", &m, &n);

    int arr[m][n];
    int i, j;

    printf("Enter %d integers: ", m * n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nRow-wise:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d", arr[i][j]);
        }
    }

    printf("\nColumn-wise:\n");
    for (j = 0; j < n; j++) {
        for (i = 0; i < m; i++) {
            printf("%d", arr[i][j]);
        }
    }

    return 0;
}