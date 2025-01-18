#include <stdio.h>

int sum_of_array(int arr[], int n) {
    int i, sum = 0;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n, i, sum_in_main;
    printf("Enter the number of numbers: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Sum In Function: %d\n", sum_of_array(arr, n));

    printf("Enter the number of numbers: ");
    scanf("%d", &n);
    int arr2[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }
    sum_in_main = sum_of_array(arr2, n);
    printf("Sum In Main: %d\n", sum_in_main);
    return 0;
}