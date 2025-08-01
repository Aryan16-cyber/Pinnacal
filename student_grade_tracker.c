
#include <stdio.h>
#define MAX_STUDENTS 100
#define MAX_SUBJECTS 10

typedef struct {
    int   roll;
    char  name[50];
    float marks[MAX_SUBJECTS];
    float avg;
    char  grade;
} Student;

char grade_from_avg(float a) {
    if (a >= 90) return 'S';
    if (a >= 80) return 'A';
    if (a >= 70) return 'B';
    if (a >= 60) return 'C';
    if (a >= 50) return 'D';
    return 'F';
}

int main() {
    Student st[MAX_STUDENTS];
    int nStud, nSub;

    printf("Number of subjects : ", MAX_SUBJECTS);
    scanf("%d", &nSub);
    if (nSub < 1 || nSub > MAX_SUBJECTS) {
        printf("Invalid subjects count.\n");
        return 1;
    }

    printf("Number of students : ", MAX_STUDENTS);
    scanf("%d", &nStud);
    if (nStud < 1 || nStud > MAX_STUDENTS) {
        printf("Invalid students count.\n");
        return 1;
    }

    for (int i = 0; i < nStud; ++i) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll: ");
        scanf("%d", &st[i].roll);
        printf("Name (no spaces): ");
        scanf("%49s", st[i].name);

        float sum = 0.0f;
        for (int j = 0; j < nSub; ++j) {
            printf("Marks in subject %d: ", j + 1);
            scanf("%f", &st[i].marks[j]);
            sum += st[i].marks[j];
        }
        st[i].avg   = sum / nSub;
        st[i].grade = grade_from_avg(st[i].avg);
    }

    printf("\n------------------- RESULT -------------------\n");
    printf("%-6s %-15s %-8s %-6s\n", "Roll", "Name", "Average", "Grade");
    for (int i = 0; i < nStud; ++i) {
        printf("%-6d %-15s %-8.2f %-6c\n",
               st[i].roll, st[i].name, st[i].avg, st[i].grade);
    }

    return 0;
}