#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, j;
    int n;
    char temp;

    gets(str);
    n = strlen(str);

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (tolower(str[i]) > tolower(str[j])) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    printf("%s\n", str);
    return 0;
}