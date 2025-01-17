#include <stdio.h>
#include <stdbool.h>

bool f18(int n) {
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

int main() {
    int t[] = {1, 2, 11, 39, 101};
    int n = sizeof(t) / sizeof(t[0]);
    for(int i = 0; i<n; i++){
        if (f18(t[i])) {
            printf("Prime\n");
        } else {
            printf("Not prime\n");
        }
    }
    return 0;
}