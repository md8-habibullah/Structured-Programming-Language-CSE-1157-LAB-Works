#include <stdio.h>

void generate_primes(int n) {
    printf("Prime less than %d: ", n);
    for (int i = 2; i < n; i++) {
        if (is_prime(i)) {
            printf("%d, ", i);
        }
    }
    printf("\n");
}

int main() {
    generate_primes(5);
    generate_primes(10);
    generate_primes(40);
    return 0;
}