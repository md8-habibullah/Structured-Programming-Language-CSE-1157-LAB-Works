#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    a += b;
    printf("Incremented Value: %d\n", a);
    
    a -= b;
    printf("Decremented Value: %d\n", a);
    
    return 0;
}
