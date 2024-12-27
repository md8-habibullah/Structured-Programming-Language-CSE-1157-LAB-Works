#include <stdio.h>

int main() {
    int x, y, r = 1;
    scanf("%d %d", &x, &y);
    for (; y; y--) r *= x;
    printf("%d\n", r);
    return 0;
}