#include <stdio.h>

int sum_of_numbers() {
    int num, sum = 0;
    while (scanf("%d", &num) == 1) {
        sum += num;
    }
    return sum;
}

int main() {
    int total_sum;

    printf("Enter numbers (press Ctrl+D or Ctrl+Z to finish on Linux/Windows):\n");
    total_sum = sum_of_numbers();
    printf("Sum In Function: %d\n", total_sum);
    printf("Sum In Main: %d\n", total_sum);

    return 0;
}