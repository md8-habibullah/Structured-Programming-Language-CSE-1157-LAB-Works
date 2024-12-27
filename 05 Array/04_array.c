#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    float arr[n], sum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    float average = sum / n;
    printf("%.2f\n", average);

    return 0;
}