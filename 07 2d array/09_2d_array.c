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

    // Sum of first row
    for (int i = 0; i < n; i++) {
        sum += matrix[0][i];
    }

    // Sum of last row
    for (int i = 0; i < n; i++) {
        sum += matrix[n - 1][i];
    }

    // Sum of main diagonal
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    // Sum of anti-diagonal
    for (int i = 0; i < n; i++) {
        sum += matrix[i][n - 1 - i];
    }

    // Remove duplicates from diagonals
    sum -= matrix[0][0]; // Top left corner
    sum -= matrix[n - 1][n - 1]; // Bottom right corner

    printf("Sum of elements: %d\n", sum);

    return 0;
}