#include <stdio.h>

void multiply_by_2(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] *= 2;
    }
}

int main() {
    int arr1[] = {15, 7, -28, 26, 10};
    int arr2[] = {12, 45, 1, 10, 5, 3, 22};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    multiply_by_2(arr1, n1);
    multiply_by_2(arr2, n2);

    for (int i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    for (int i = 0; i < n2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}