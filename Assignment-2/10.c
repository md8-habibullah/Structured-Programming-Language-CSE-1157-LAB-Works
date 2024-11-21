#include <stdio.h>

int main() {
    int a, b, c;
    int result;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b) {
        result = 1;
    } else {
        result = 0;
    }
    printf("a) %d\n", result);
    
    if (b < c) {
        result = 1;
    } else {
        result = 0;
    }
    printf("b) %d\n", result);
    
    if (a == c) {
        result = 1;
    } else {
        result = 0;
    }
    printf("c) %d\n", result);
    
    return 0;
}
