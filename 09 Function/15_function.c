#include <stdio.h>

int find_min(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int arr1[] = {15, 7, -28, -37, 26, 10, 5, 3, 22};
    int arr2[] = {12, 45, 1, 10, 5, 3};
    printf("Minimum Value: %d\n", find_min(arr1, 9));
    printf("Minimum Value: %d\n", find_min(arr2, 6));
    return 0;
}