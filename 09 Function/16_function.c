#include <stdio.h>
#include <stdlib.h>

int* f16(int a[], int n) {
    int* b = (int*)malloc(n * sizeof(int));
    if (b == NULL) {
        perror("Memory allocation failed");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        b[i] = a[i] * 2;
    }
    return b;
}

int main() {
    int a1[] = {157, -28, -37, 26, 10};
    int n1 = sizeof(a1) / sizeof(a1[0]);
    int* b1 = f16(a1, n1);

    printf("Multiplied array 1: ");
    for(int i = 0; i < n1; i++)
        printf("%d ", b1[i]);
    printf("\n");
    free(b1);

    int a2[] = {12, 45, 1, 10, 5, 3, 22};
    int n2 = sizeof(a2) / sizeof(a2[0]);
    int* b2 = f16(a2, n2);

    printf("Multiplied array 2: ");
    for(int i = 0; i < n2; i++)
        printf("%d ", b2[i]);
    printf("\n");
    free(b2);

    return 0;
}