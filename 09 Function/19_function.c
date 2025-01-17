#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void generate_primes(int n) {
    printf("Prime less than %d: ", n);
    int count = 0;
    for (int i = 2; i < n; i++) {
        if (is_prime(i)) {
            printf("%d", i);
            count++;
            if (i < n -1 && is_prime(i+1))
                printf(", ");
        }
    }
    printf("\n");
}

int main() {
    int t[] = {5,10,40};
    int n = sizeof(t)/sizeof(t[0]);
    for(int i = 0; i<n; i++){
        generate_primes(t[i]);
    }
    return 0;
}