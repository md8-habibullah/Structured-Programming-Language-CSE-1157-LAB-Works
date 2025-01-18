#include <stdio.h>

int main()
{
    int m, n;
    printf("Enter m and n: ");
    scanf("%d %d", &m, &n);

    int arr[m][n];
    int i, j, sum = 0;

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    }

    printf("Sum of all elements: %d\n", sum);

    return 0;
}