#include <stdio.h>

int main() {
    long int longInt = 76545686;
    long long int longLongInt = 9223372036854775807;
    long double longDouble = 98765434567.897654e2;
    short int shortInt = 4567;

    printf("The long int value: %ld\n", longInt);
    printf("The long long int value: %lld\n", longLongInt);
    printf("The long double value: %Lf\n", longDouble);
    printf("The short int value: %d\n", shortInt);

    return 0;
}