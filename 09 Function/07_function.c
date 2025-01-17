#include <stdio.h>

int sum_of_numbers_in_array(int n) {
    int numbers[n];
    int sum = 0;
    int i;

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }
    return sum;
}

int main() {
    int num_count, total_sum;

    printf("Enter the number of integers you want to sum:\n");
    scanf("%d", &num_count);

    total_sum = sum_of_numbers_in_array(num_count);
    printf("Sum In Function: %d\n", total_sum);
    printf("Sum In Main: %d\n", total_sum);

    return 0;
}