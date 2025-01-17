#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    char id[20];
    float cgpa;
};

int main() {
    struct student s;

    printf("Enter student name: ");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = 0;

    printf("Enter student ID: ");
    fgets(s.id, sizeof(s.id), stdin);
    s.id[strcspn(s.id, "\n")] = 0;

    printf("Enter student CGPA: ");
    scanf("%f", &s.cgpa);
    while(getchar() != '\n');

    printf("\nStudent Information:\n");
    printf("Name: %s\n", s.name);
    printf("ID: %s\n", s.id);
    printf("CGPA: %.2f\n", s.cgpa);

    return 0;
}