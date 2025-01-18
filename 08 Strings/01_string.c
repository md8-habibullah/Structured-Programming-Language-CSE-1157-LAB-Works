#include <stdio.h>

int main()
{
    char str[100];
    int i, len = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        len++;
    }

    printf("Length of the string: %d\n", len);

    return 0;
}