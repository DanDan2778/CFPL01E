#include <stdio.h>
#include <math.h> // Include math.h for the round() function

// Function to determine the grade classification
const char* equi_grade(float grade);

int main() 
{
    float grade; // Declare grade as float
    const char* result; // Declare result as a pointer to const char

    printf("Enter Grade: ");
    scanf("%f", &grade); // Read the grade as float

    // Round the grade before passing it to the equi_grade function
    grade = round(grade);

    result = equi_grade(grade); // Call equi_grade and assign result

    printf("Rounded Grade: %.0f\n", grade); // Print the rounded grade
    printf("%s\n", result); // Print the result
    
    return 0;
}

const char* equi_grade(float grade) {
    if (grade >= 90) {
        return "A! - Excellent";
    } else if (grade >= 75) {
        return "B! - Good";
    } else {
        return "C! - Poor";
    }
}
