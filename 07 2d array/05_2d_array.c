#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the identity matrix: ");
    scanf("%d", &n);

    int arr[n][n];
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j) {
                arr[i][j] = 1;
            } else {
                arr[i][j] = 0;
            }
        }
    }

    printf("\nIdentity Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}