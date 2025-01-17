#include <stdio.h>

void print_char_value(char c) {
    printf("Value received from main: %c\n", c);
}

int main() {
    char input1 = '3';
    char input2 = 'A';

    print_char_value(input1);
    print_char_value(input2);

    return 0;
}