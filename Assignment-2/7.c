#include <stdio.h>

int main() {
    int a;
    float b;
    
    printf("Enter an integer and a float: ");
    scanf("%d %f", &a, &b);
    
    printf("Assignment: %.6f assigned to an int produces %d\n", b, (int)b);
    printf("Assignment: %d assigned to a float produces %.6f\n", a, (float)a);
    printf("Type Casting: (float) %d produces %.6f\n", a, (float)a);
    printf("Type Casting: (int) %.6f produces %d\n", b, (int)b);
    
    return 0;
}
