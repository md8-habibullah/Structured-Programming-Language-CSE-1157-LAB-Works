#include <stdio.h>

struct Student {
    char name[50];
    char id[10];
    float cgpa;
};

int main() {
    struct Student s1 = {"John Doe", "12345", 3.85}; 
    printf("Name: %s\n", s1.name);
    printf("ID: %s\n", s1.id);
    printf("CGPA: %.2f\n", s1.cgpa);
    return 0;
}