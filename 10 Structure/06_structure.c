#include <stdio.h>

struct Student {
    char name[50];
    char id[10];
    float cgpa;
};

int main() {
    struct Student s1;
    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter ID: ");
    scanf("%s", s1.id);
    printf("Enter CGPA: ");
    scanf("%f", &s1.cgpa);
    return 0;
}