#include <stdio.h>
#include <limits.h> 
int find_minimum(int arr[], int n) {
    if (n <= 0) {
        return INT_MAX;
    }

    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int arr1[] = {157, -28, -37, 26, 10};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int min1 = find_minimum(arr1, n1);
    printf("Minimum Value: %d\n", min1);

    int arr2[] = {12, 45, 1, 10, 5, 3, 22};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int min2 = find_minimum(arr2, n2);
    printf("Minimum Value: %d\n", min2);

    int arr3[] = {};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    int min3 = find_minimum(arr3, n3);
    if(min3 == INT_MAX)
        printf("Empty Array\n");
    else
        printf("Minimum Value: %d\n", min3);

    return 0;
}