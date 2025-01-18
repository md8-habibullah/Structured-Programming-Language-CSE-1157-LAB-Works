#include <stdio.h>

struct Student {
    char name[50];
    char id[10];
    float cgpa;
};

int main() {
    struct Student s1;
    s1.name[0] = '\0';
    strcpy(s1.name, "Jane Smith"); 
    strcpy(s1.id, "67890");
    s1.cgpa = 3.75;
    return 0;
}