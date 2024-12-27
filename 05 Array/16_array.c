#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < n; i += 2) {
        arr[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}