#include <stdio.h>

int main() {
    unsigned int a = 4294967295U;
    unsigned long int b = 4294967295UL;
    unsigned long long int c = 18446744073709551615ULL;
    unsigned short int d = 65535U;

    printf("The unsigned int value: %u\n", a);
    printf("The unsigned long int value: %lu\n", b);
    printf("The unsigned long long int value: %llu\n", c);
    printf("The unsigned short int value: %hu\n", d);
    return 0;
}