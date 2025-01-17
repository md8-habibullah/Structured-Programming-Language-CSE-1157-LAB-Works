#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the square matrix (must be odd): ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Error: n must be odd.\n");
        return 1;
    }

    int matrix[n][n];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;

    // Calculate sum based on the pattern
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i == 0 || i == n - 1) && (j == 0 || j == n - 1 || j == (n - 1) / 2)) {
                sum += matrix[i][j];
            } else if (i == (n - 1) / 2 && (j == 0 || j == n - 1 || j == (n - 1) / 2)) {
                sum += matrix[i][j];
            }
        }
    }

    printf("Sum of elements: %d\n", sum);

    return 0;
}