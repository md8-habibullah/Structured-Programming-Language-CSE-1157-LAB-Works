#include <stdio.h>

struct Student {
    char name[50];
    char id[10];
    float cgpa;
};

int main() {
    struct Student s1, s2;

    printf("Enter details for student 1:\n");
    printf("Name: ");
    scanf("%s", s1.name);
    printf("ID: ");
    scanf("%s", s1.id);
    printf("CGPA: ");
    scanf("%f", &s1.cgpa);

    printf("Enter details for student 2:\n");
    printf("Name: ");
    scanf("%s", s2.name);
    printf("ID: ");
    scanf("%s", s2.id);
    printf("CGPA: ");
    scanf("%f", &s2.cgpa);

    printf("\nStudent 1:\n");
    printf("Name: %s\n", s1.name);
    printf("ID: %s\n", s1.id);
    printf("CGPA: %.2f\n", s1.cgpa);

    printf("\nStudent 2:\n");
    printf("Name: %s\n", s2.name);
    printf("ID: %s\n", s2.id);
    printf("CGPA: %.2f\n", s2.cgpa);

    return 0;
}