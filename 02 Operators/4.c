#include <stdio.h>

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    
    printf("X++ : %d\n", a++);
    printf("++X : %d\n", ++a);
    printf("X-- : %d\n", a--);
    printf("--X : %d\n", --a);
    
    return 0;
}
