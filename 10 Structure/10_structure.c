#include <stdio.h>

struct Triangle {
    int triangle_id;
    int base;
    int height;
};

int main() {
    struct Triangle triangles[3];

    for (int i = 0; i < 3; i++) {
        triangles[i].triangle_id = i + 1;
        printf("Enter base and height for triangle %d: ", triangles[i].triangle_id);
        scanf("%d %d", &triangles[i].base, &triangles[i].height);
    }

    for (int i = 0; i < 3; i++) {
        float area = (float)(triangles[i].base * triangles[i].height) / 2;
        printf("Area of %d = %.2f\n", triangles[i].triangle_id, area);
    }

    return 0;
}