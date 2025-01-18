#include <stdio.h>

int main()
{
    int m, n;
    printf("Enter m and n: ");
    scanf("%d %d", &m, &n);

    int arr[m][n];
    int i, j, max, max_i, max_j;

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    max = arr[0][0];
    max_i = 0;
    max_j = 0;

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
                max_i = i;
                max_j = j;
            }
        }
    }

    printf("Max: %d\n", max);
    printf("Location: [%d][%d]\n", max_i, max_j);

    return 0;
}