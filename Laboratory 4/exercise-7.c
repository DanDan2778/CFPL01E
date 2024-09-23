#include <stdio.h>

// Write a program that will ask the user to enter a number and display all the factor of the number.

int main()
{
    int number;

    printf("Enter a Number: ");
    scanf("%d", &number);

    printf("The Factors of %d are: ", number);

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            if (i < number)
            {
                printf("%d, ", i);
            }
            else
            {
                printf("and %d", i);
            }
        }
    }

    return 0;
}