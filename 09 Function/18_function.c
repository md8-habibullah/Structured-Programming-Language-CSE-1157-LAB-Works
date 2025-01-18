#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) {
        return 0; // Not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

int main() {
    int numbers[] = {1, 2, 11, 39, 101};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < n; i++) {
        if (is_prime(numbers[i])) {
            printf("Prime\n");
        } else {
            printf("Not prime\n");
        }
    }

    return 0;
}