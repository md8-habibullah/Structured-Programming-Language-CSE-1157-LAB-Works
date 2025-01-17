#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int l;
    int i;

    gets(str);
    l = strlen(str);

    for (i = l - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}