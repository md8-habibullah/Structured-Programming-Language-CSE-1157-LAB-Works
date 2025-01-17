#include <stdio.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    printf("Length of the string: %d\n", len);

    return 0;
}