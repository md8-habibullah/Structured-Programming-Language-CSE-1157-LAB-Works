#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    char id[20];
    float cgpa;
};

int main() {
    struct student s = {
        .name = "Default Name",
        .id = "Default ID",
        .cgpa = 0.0f
    };

    printf("Name: %s\n", s.name);
    printf("ID: %s\n", s.id);
    printf("CGPA: %.2f\n", s.cgpa);

    return 0;
}