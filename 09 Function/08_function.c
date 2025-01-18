#include <stdio.h>

void print_reverse(int arr[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, i;
    printf("Enter the number of numbers: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    print_reverse(arr, n);

    printf("Enter the number of numbers: ");
    scanf("%d", &n);
    int arr2[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }
    print_reverse(arr2, n);
    return 0;
}