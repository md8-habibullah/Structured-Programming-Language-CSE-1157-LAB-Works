#include <stdio.h>

int string_length(char *str) {
    int len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

int main() {
    char str1[] = "hello world";
    char str2[] = "I love my country";
    printf("%d\n", string_length(str1));
    printf("%d\n", string_length(str2));
    return 0;
}