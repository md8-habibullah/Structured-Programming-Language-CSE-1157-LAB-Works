#include <stdio.h>

int main() {
    int n, m;
    scanf("%d", &n);

    int arrA[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arrA[i]);
    }

    scanf("%d", &m);

    int arrB[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &arrB[i]);
    }

    int temp[n];
    for (int i = 0; i < n && i < m; i++) {
        temp[i] = arrA[i];
        arrA[i] = arrB[i];
        arrB[i] = temp[i];
    }

    printf("Array A: ");
    for (int i = 0; i < n; i++) {
        printf("%d", arrA[i]);
    }
    printf("\n");

    printf("Array B: ");
    for (int i = 0; i < m; i++) {
        printf("%d", arrB[i]);
    }
    printf("\n");

    return 0;
}