#include <stdio.h>

int main()
{
    char str[100];
    int i, count = 1;

    printf("Enter a string: ");
    scanf("%[^\n]%*c", str); 

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            count++;
        }
    }

    printf("Number of words: %d\n", count);

    return 0;
}