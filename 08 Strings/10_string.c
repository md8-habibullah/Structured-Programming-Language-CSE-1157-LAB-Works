#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100], ch;
    int i, count = 0;

    printf("Enter a string: ");
    scanf("%[^\n]%*c", str);

    printf("Enter the character to count: ");
    scanf(" %c", &ch); 

    for (i = 0; str[i] != '\0'; i++) {
        if (tolower(str[i]) == tolower(ch)) { 
            count++;
        }
    }

    printf("Number of occurrences of '%c': %d\n", ch, count);

    return 0;
}