#include <stdio.h>

struct student {
    char name[50];
    int id;
    float cgpa;
};

int main() {
    struct student s;
    s.name[0] = '\0';
    s.id = 0;
    s.cgpa = 0.0;
    printf("Name: %s\n", s.name);
    printf("ID: %d\n", s.id);
    printf("CGPA: %f\n", s.cgpa);
    return 0;
}  