#include <stdio.h>

void swap_by_reference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Value in func: %d %d\n", *a, *b);
}

int main() {
    int x = 10;
    int y = 20;

    printf("Value in main: %d %d\n", x, y);
    swap_by_reference(&x, &y);
    printf("Value in main: %d %d\n", x, y);

    return 0;
}