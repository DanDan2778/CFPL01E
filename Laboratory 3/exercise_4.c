#include <stdio.h>

int main()
{
    int years_of_service;
    float salary, bonus;

    printf("Enter Number of Years of Service: ");
    scanf("%d", &years_of_service);

    printf("Enter Salary: ");
    scanf("%f", &salary);

    if (years_of_service == 1)
    {
        bonus = 0.1 * salary;
    }
    else if (years_of_service <= 5)
    {
        bonus = 0.2 * salary;
    }
    else if (years_of_service <= 10)
    {
        bonus = 0.5 * salary;
    }
    else
    {
        bonus = 0.75 * salary;
    }

    printf("Year of Service: %d\n", years_of_service);
    printf("Salary: %.2f\n", salary);
    printf("Bonus: %.2f\n", bonus);
    return 0;
}