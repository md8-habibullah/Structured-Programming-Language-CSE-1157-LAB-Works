#include <stdio.h>

int main()
{
    int m, n;

    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    int matrix[m][n];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int max = matrix[0][0];
    int max_row = 0, max_col = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
                max_row = i;
                max_col = j;
            }
        }
    }

    printf("Max: %d\n", max);
    printf("Location: [%d][%d]\n", max_row, max_col);

    return 0;
}