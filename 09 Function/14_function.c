#include <stdio.h>

void print_even_numbers(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int arr1[] = {24, 77, 117, 512, 1024};
    int arr2[] = {45, 33, 0, 256};
    print_even_numbers(arr1, 5);
    print_even_numbers(arr2, 4);
    return 0;
}