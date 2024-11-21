#include <stdio.h>

int a = 10;

void b() {
    int a = 20;

    printf("A. Global: %d\n", a);
    printf("B. Local: %d\n", a);
    printf("C. Global: %d\n", a);
}

int main() {
    b();
    return 0;
}
