#include <stdio.h>
#include <stdlib.h>

int* f17(int a[], int n) {
    int* b = (int*)malloc(n * sizeof(int));
    if (b == NULL) {
        perror("Memory allocation failed");
        exit(1);
    }
    for (int i = 0; i < n; i++) {
        b[i] = a[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (b[i] > b[j]) {
                int t = b[i];
                b[i] = b[j];
                b[j] = t;
            }
        }
    }
    return b;
}

int main() {
    int a1[] = {10, 22, -5, 117, 0};
    int n1 = sizeof(a1) / sizeof(a1[0]);
    int* b1 = f17(a1, n1);

    printf("Sorted array 1: ");
    for (int i = 0; i < n1; i++) {
        printf("%d ", b1[i]);
    }
    printf("\n");
    free(b1);

    return 0;
}