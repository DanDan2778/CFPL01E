#include <stdio.h>
#include <string.h>

int main()
{
    char stud_name[50], remark[30];
    float major_exam, long_exams[2], short_quizzes[3];
    int i;

    printf("Enter Student's Name: ");
    fgets(stud_name, sizeof(stud_name), stdin);

    printf("Score of Major Exam: ");
    scanf("%f", &major_exam);

    printf("Scores of Two Long Exams:\n");
    for (i = 0; i < 2; i++)
    {
        printf("Long Exam %d: ", i + 1);
        scanf("%f", &long_exams[i]);
    }

    printf("Score of Short Quizzes:\n");
    for (i = 0; i < 3; i++)
    {
        printf("Short Quiz %d: ", i + 1);
        scanf("%f", &short_quizzes[i]);
    }

    float avg_long_exam = (long_exams[0] + long_exams[1]) / 2;
    float avg_short_quizzes = (short_quizzes[0] + short_quizzes[1] + short_quizzes[2]) / 3;

    float grade = 0.40 * major_exam + avg_long_exam * 0.3 + avg_short_quizzes * 0.3;

    if (grade >= 75)
    {
        strcpy(remark, "Student Passed");
    }
    else
    {
        strcpy(remark, "Student Failed");
    };

    printf("\nStudent's Name: %s", stud_name);
    printf("Final Grade: %.2f\n", grade);
    printf("%s", remark);

    return 0;
}