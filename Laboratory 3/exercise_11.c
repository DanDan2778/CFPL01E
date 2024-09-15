#include <stdio.h>

int main()
{
    char student_name[50];
    float midterm_grade, minor_B, Final_exam_rating, remark;

    printf("Enter the Student's Name: ");
    fgets(student_name, sizeof(student_name), stdin);

    printf("Enter the Student's Midterm Grade: ");
    scanf("%f", &midterm_grade);

    printf("Enter the Student's Minor Grade: ");
    scanf("%f", &minor_B);

    printf("Enter the Student's Final Exam Grade: ");
    scanf("%f", &Final_exam_rating);

    float final_grade = (0.30 * midterm_grade) + (0.1 * minor_B) + (0.6 * Final_exam_rating);

    if (final_grade >= 98 && final_grade <= 100)
    {
        remark = 4.00;
    }
    else if (final_grade >= 95 && final_grade <= 97)
    {
        remark = 3.75;
    }
    else if (final_grade >= 92 && final_grade <= 94)
    {
        remark = 3.50;
    }
    else if (final_grade >= 89 && final_grade <= 91)
    {
        remark = 3.25;
    }
    else if (final_grade >= 86 && final_grade <= 88)
    {
        remark = 3.00;
    }
    else if (final_grade >= 83 && final_grade <= 85)
    {
        remark = 2.75;
    }
    else if (final_grade >= 80 && final_grade <= 82)
    {
        remark = 2.50;
    }
    else if (final_grade >= 77 && final_grade <= 79)
    {
        remark = 2.25;
    }
    else if (final_grade >= 74 && final_grade <= 76)
    {
        remark = 2.00;
    }
    else if (final_grade >= 71 && final_grade <= 73)
    {
        remark = 1.75;
    }
    else if (final_grade >= 68 && final_grade <= 70)
    {
        remark = 1.50;
    }
    else if (final_grade >= 64 && final_grade <= 67)
    {
        remark = 1.25;
    }
    else if (final_grade >= 60 && final_grade <= 63)
    {
        remark = 1.00;
    }
    else
    {
        remark = 0.00;
    }

    printf("\nStudent's Name: %s\n", student_name);
    printf("Student's Final Grade: %.2f\n", final_grade);
    printf("Student's Remark: %.2f\n", remark);

    return 0;
}