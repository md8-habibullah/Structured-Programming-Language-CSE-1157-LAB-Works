#include <stdio.h>

int is_prime(int n) {
    for (int i = 2; i * i <= n; i++) if (n % i == 0) return 0;
    return n > 1;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%s\n", is_prime(n) ? "Prime" : "Not prime");
    return 0;
}