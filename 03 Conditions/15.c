#include <stdio.h>

int main() {
    int N, num, guess1, guess2, guess3;

    printf("Enter N: ");
    scanf("%d", &N);

    printf("Enter the number to be guessed: ");
    scanf("%d", &num);

    printf("Guess 1: ");
    scanf("%d", &guess1);

    if (guess1 == num) {
        printf("Right, Player 2 wins!\n");
    } else {
        printf("Wrong, %d Chance(s) Left\n", N - 1);

        printf("Guess 2: ");
        scanf("%d", &guess2);

        if (guess2 == num) {
            printf("Right, Player 2 wins!\n");
        } else {
            printf("Wrong, %d Chance(s) Left\n", N - 2);

            printf("Guess 3: ");
            scanf("%d", &guess3);

            if (guess3 == num) {
                printf("Right, Player 2 wins!\n");
            } else {
                printf("Wrong, 0 Chance(s) Left\n");
                printf("Player 1 wins!\n");
            }
        }
    }

    return 0;
}