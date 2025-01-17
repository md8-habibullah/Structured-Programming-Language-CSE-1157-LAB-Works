#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int c = 0;
    int w = 0;

    gets(str);

    for (c = 0; str[c] != '\0'; c++) {
        if (str[c] == ' ') {
            if (c > 0 && str[c-1] != ' ')
                w++;
        }
    }
    if (c>0 && str[c-1] != ' ')
        w++;

    printf("%d\n", w);
    return 0;
}