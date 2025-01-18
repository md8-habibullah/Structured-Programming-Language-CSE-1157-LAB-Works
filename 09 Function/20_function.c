#include <stdio.h>

int count_primes(int n) {
    int count = 0, num = 2;
    while (count < n) {
        if (is_prime(num)) {
            count++;
        }
        num++;
    }
    return num - 1;
}

int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    printf("%dth Prime: %d\n", n, count_primes(n));

    printf("Enter N: ");
    scanf("%d", &n);
    printf("%dth Prime: %d\n", n, count_primes(n));

    return 0;
}