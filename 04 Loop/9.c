#include <stdio.h>

char calculateGrade(float totalMarks) {
    if (totalMarks >= 90) return 'A';
    else if (totalMarks >= 86) return 'A';
    else if (totalMarks >= 82) return 'B';
    else if (totalMarks >= 78) return 'B';
    else if (totalMarks >= 74) return 'B';
    else if (totalMarks >= 70) return 'C';
    else if (totalMarks >= 66) return 'C';
    else if (totalMarks >= 62) return 'C';
    else if (totalMarks >= 58) return 'D';
    else if (totalMarks >= 55) return 'D';
    else return 'F';
}

int main() {
    int N;
    printf("Enter the number of students: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        float A, HW, CT, MT, TF;
        printf("Enter marks for student %d (A HW CT MT TF): ", i + 1);
        scanf("%f %f %f %f %f", &A, &HW, &CT, &MT, &TF);

        float totalMarks = (A * 0.05) + (HW * 0.10) + (CT * 0.15) + (MT * 0.30) + (TF * 0.40);
        char grade = calculateGrade(totalMarks);

        printf("Student %d: %c\n", i + 1, grade);
    }

    return 0;
}
