#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    int x = a - b / 3 + c * 2 - 1;
    int y = a - (b / (3 + c) * 2) - 1;
    int z = a - ((b / 3) + c * 2) - 1;
    
    printf("X = %d\n", x);
    printf("Y = %d\n", y);
    printf("Z = %d\n", z);
    
    return 0;
}
