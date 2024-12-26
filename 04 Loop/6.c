#include <stdio.h>

int main() {
    int x, n, guess;

    printf("Enter the number chosen by Player-1 (X): ");
    scanf("%d", &x);

    printf("Enter the number of tries allowed (N): ");
    scanf("%d", &n);

    for (int i = n; i > 0; i--) {
        printf("Enter your guess (Player-2): ");
        scanf("%d", &guess);

        if (guess == x) {
            printf("Right, Player-2 wins!\n");
            break;
        } else {
            printf("Wrong, %d Choice(s) Left!\n", i - 1);
        }
    }

    if (n == 0) {
        printf("Player-1 wins!\n");
    }

    return 0;
}