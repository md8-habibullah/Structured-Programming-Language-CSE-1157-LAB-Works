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

    int intersection[n]; // Assuming maximum size of intersection is n
    int intersection_size = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arrA[i] == arrB[j]) {
                intersection[intersection_size++] = arrA[i];
                break; // No need to search further in arrB for this element
            }
        }
    }

    if (intersection_size == 0) {
        printf("Empty set\n");
    } else {
        printf("Intersection: ");
        for (int i = 0; i < intersection_size; i++) {
            printf("%d ", intersection[i]);
        }
        printf("\n");
    }

    return 0;
}