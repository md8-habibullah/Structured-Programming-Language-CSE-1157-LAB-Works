#include <stdio.h>

void swap_references(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;
    swap_references(&x, &y);
    printf("Value in func: %d %d\n", x, y);
    printf("Value in main: %d %d\n", x, y);
    return 0;
}