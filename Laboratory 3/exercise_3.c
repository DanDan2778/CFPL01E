#include <stdio.h>

int main()
{
    float hours_per_week, rate_per_hour;

    printf("Enter Hours Per Week: ");
    scanf("%f", &hours_per_week);

    printf("Enter Rate Per Hour: ");
    scanf("%f", &rate_per_hour);

    float salary = hours_per_week * rate_per_hour;

    printf("Salary: %.2f\n", salary);

    if (hours_per_week > 45)
    {
        printf("Bonus: P500\n");
        printf("Total Salary: P%.2f", salary + 500);
    }
    else if (hours_per_week > 40)
    {
        printf("Bonus: P250\n");
        printf("Total Salary: P%.2f", salary + 250);
    }
    else
    {
        printf("Bonus: P150\n");
        printf("Total Salary: P%.2f", salary + 150);
    }

    return 0;
}