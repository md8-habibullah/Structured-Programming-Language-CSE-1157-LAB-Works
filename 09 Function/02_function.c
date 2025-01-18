#include <stdio.h>

void print_char(char c) {
    printf("Value received from main: %c\n", c);
}

int main() {
    char ch1 = '3', ch2 = 'A';
    print_char(ch1);
    print_char(ch2);
    return 0;
}