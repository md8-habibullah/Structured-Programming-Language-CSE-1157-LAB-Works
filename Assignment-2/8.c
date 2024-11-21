#include <stdio.h>

int main() {
    int a, b, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    if(a > b)
        printf("Max: %d\n", a);
    else if (b>a)
        printf("Max: %d\n", b);
    else
        printf("Both equal So, Not exist Max value!");
    
    return 0;
}
