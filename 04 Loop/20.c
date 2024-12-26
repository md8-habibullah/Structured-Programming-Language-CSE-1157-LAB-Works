#include <stdio.h>

int main() {
    int n, s = 0, t;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        t = 0;
        for (int j = 1; j <= i; j++) t = t * 10 + j; 
        s += t;
    }
    printf("%d\n", s);
    return 0;
}