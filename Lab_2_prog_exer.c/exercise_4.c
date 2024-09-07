#include <stdio.h>

// Write a program that will compute and display the midterm grade of a student. The
// midterm grade is equal to one-third of the minor A exam and two-thirds of the midterm
// exam.

int main()
{
    char stud_name[30];
    int minor_a, midterm;

    printf("Enter Student's Name: ");
    fgets(stud_name, sizeof(stud_name), stdin);

    printf("Enter Minor A Exam: ");
    scanf("%d", &minor_a);

    printf("Enter Midterm Exam: ");
    scanf("%d", &midterm);

    float midterm_grd = (1.0 / 3.0 * minor_a) + (2.0 / 3.0 * midterm);

    printf("\nStudent's Name: %s", stud_name);
    printf("Midterm Grade: %.2f\n\n", midterm_grd);

    printf("Press Enter to exit...");
    getchar();
    getchar();

    return 0;
}