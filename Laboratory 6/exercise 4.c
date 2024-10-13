#include <stdio.h>
#include <math.h>

// 4. Write a program containing a function EquiGrade that will retum "A! - Excellent" if the grade 
// is greater than or equal to 90, "B! - Good" if grade is less than 90 and greater than of equal to 75. 
// "C! - Poor" otherwise. 

const char* equi_grade(float grade);

int main() 
{
    float grade;
    const char* result;

    printf("Enter Grade: ");
    scanf("%f", &grade);

    grade = round(grade);

    result = equi_grade(grade);

    printf("%s\n", result);
    
    return 0;
}

const char* equi_grade(float grade){
    if (grade >= 90){
        return "A! - Excellent";
    } else if (grade >= 75 && grade < 90){
        return "B! - Good";
    } else {
        return "C! - Poor";
    }
}