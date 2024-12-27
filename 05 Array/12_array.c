#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int number, position;
    scanf("%d %d", &number, &position);

    // Shift elements to the right to make space for the new number
    for (int i = n - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new number
    arr[position] = number;

    // Print the updated array
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}