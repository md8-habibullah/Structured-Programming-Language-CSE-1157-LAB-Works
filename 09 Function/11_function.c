#include <stdio.h>
#include <string.h>

int string_length(char str[]) {
    return strlen(str);
}

int main() {
    char input1[100];
    char input2[100];

    printf("Enter a string: ");
    gets(input1);
    printf("Length: %d\n", string_length(input1));

    printf("Enter another string: ");
    gets(input2);
    printf("Length: %d\n", string_length(input2));

    return 0;
}