#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 10

int main()
{
    char strings[MAX_STRINGS][100];
    int i, j;

    printf("Enter strings (press Enter after each string):\n");
    for (i = 0; i < MAX_STRINGS; i++) {
        scanf("%[^\n]%*c", strings[i]);
        if (strcmp(strings[i], "") == 0) { 
            break;
        }
    }

    for (i = 0; i < i - 1; i++) {
        for (j = 0; j < i - 1 - i; j++) {
            if (strcmp(strings[j], strings[j + 1]) > 0) {
                char temp[100];
                strcpy(temp, strings[j]);
                strcpy(strings[j], strings[j + 1]);
                strcpy(strings[j + 1], temp);
            }
        }
    }

    printf("\nSorted strings:\n");
    for (i = 0; i < i; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}