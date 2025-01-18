#include <stdio.h>

int sum_of_numbers(int n) {
    int i, num, sum = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        sum += num;
    }
    return sum;
}

int main() {
    int n, sum_in_main;
    printf("Enter the number of numbers: ");
    scanf("%d", &n);
    printf("Sum In Function: %d\n", sum_of_numbers(n));

    printf("Enter the number of numbers: ");
    scanf("%d", &n);
    sum_in_main = sum_of_numbers(n);
    printf("Sum In Main: %d\n", sum_in_main);
    return 0;
}