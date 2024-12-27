#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int j = 0;
    for (int i = 0; i < n; i++) {
        int is_duplicate = 0;
        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                is_duplicate = 1;
                break;
            }
        }
        if (!is_duplicate) {
            arr[j++] = arr[i];
        }
    }

    for (int i = 0; i < j; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}