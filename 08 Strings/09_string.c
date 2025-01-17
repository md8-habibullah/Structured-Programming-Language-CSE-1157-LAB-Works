#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    char ch;
    int count = 0;
    int i;

    gets(str);
    scanf(" %c", &ch); // Note the space before %c to consume any leftover newline

    for (i = 0; str[i] != '\0'; i++) {
        if (tolower(str[i]) == tolower(ch)) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}