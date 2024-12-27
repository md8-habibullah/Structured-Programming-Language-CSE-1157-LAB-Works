#include <stdio.h>

int main() {
    int N;

    printf("Enter the number of terms: ");
    scanf("%d", &N);

    int sum = 0;
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            sum -= i;
        } else {
            sum += i;
        }
    }

    printf("Result: %d\n", sum);

    return 0;
}
