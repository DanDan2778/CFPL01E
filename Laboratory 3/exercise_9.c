#include <stdio.h>

int main()
{
    float temp_celsius;

    printf("Enter the Temperature in Celsius: ");
    scanf("%f", &temp_celsius);

    if (temp_celsius < 20)
    {
        printf("IT'S COLD!\n");
    }
    else if (temp_celsius > 30)
    {
        printf("IT'S HOT!\n");
    }
    else
    {
        printf("COOL CLIMATE!\n");
    }

    return 0;
}