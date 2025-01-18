#include <stdio.h>

void even_or_odd(int num) {
    if (num % 2 == 0) {
        printf("even\n");
    } else {
        printf("odd\n");
    }
}

int main() {
    even_or_odd(3);
    even_or_odd(8);
    return 0;
}