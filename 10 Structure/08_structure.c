#include <stdio.h>

struct Student {
    char name[50];
    char id[10];
    float cgpa;
};

int main() {
    struct Student student1, student2;

    printf("Enter details for student 1:\n");
    printf("Name: ");
    scanf("%s", student1.name);
    printf("ID: ");
    scanf("%s", student1.id);
    printf("CGPA: ");
    scanf("%f", &student1.cgpa);

    printf("Enter details for student 2:\n");
    printf("Name: ");
    scanf("%s", student2.name);
    printf("ID: ");
    scanf("%s", student2.id);
    printf("CGPA: ");
    scanf("%f", &student2.cgpa);

    if (student1.cgpa > student2.cgpa) {
        printf("\nStudent with higher CGPA:\n");
        printf("Name: %s\n", student1.name);
        printf("ID: %s\n", student1.id);
        printf("CGPA: %.2f\n", student1.cgpa);
    } else if (student2.cgpa > student1.cgpa) {
        printf("\nStudent with higher CGPA:\n");
        printf("Name: %s\n", student2.name);
        printf("ID: %s\n", student2.id);
        printf("CGPA: %.2f\n", student2.cgpa);
    } else {
        printf("\nBoth students have the same CGPA.\n");
    }

    return 0;
}