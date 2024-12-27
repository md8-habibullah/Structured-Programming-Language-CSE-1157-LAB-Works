#include <stdio.h>

int fact(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) f *= i;
    return f;
}

int main() {
    int n, r;
    scanf("%d %d", &n, &r);
    if (n >= r) printf("C(%d, %d) = %d\n", n, r, fact(n) / (fact(r) * fact(n - r)));
    else printf("Invalid\n"); 
    return 0;
}