#include <stdio.h>

void print_even_numbers(int arr[], int n) {
    printf("Even numbers: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int arr1[] = {24, 77, 117, -512, 1024};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {45, 33, 0, 256};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    print_even_numbers(arr1, n1);
    print_even_numbers(arr2, n2);

    return 0;
}