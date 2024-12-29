#include <stdio.h>

int main() {
    int N;
    printf("Enter the number of students: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        float A, HW, CT, MT, TF;
        printf("Enter marks for student %d (A HW CT MT TF): ", i + 1);
        scanf("%f %f %f %f %f", &A, &HW, &CT, &MT, &TF);

        float totalMarks = (A * 0.05) + (HW * 0.10) + (CT * 0.15) + (MT * 0.30) + (TF * 0.40);

        char grade;

        if (totalMarks >= 90) grade = 'A';
        else if (totalMarks >= 86) grade = 'A';
        else if (totalMarks >= 82) grade = 'B';
        else if (totalMarks >= 78) grade = 'B';
        else if (totalMarks >= 74) grade = 'B';
        else if (totalMarks >= 70) grade = 'C';
        else if (totalMarks >= 66) grade = 'C';
        else if (totalMarks >= 62) grade = 'C';
        else if (totalMarks >= 58) grade = 'D';
        else if (totalMarks >= 55) grade = 'D';
        else grade = 'F';

        printf("Student %d: %c\n", i + 1, grade);
    }

    return 0;
}
