#include <stdio.h>

// Create a program that converts a Fahrenheit measure to a Celsius measure
// (C = 5/9 x (F 32)).

int main()
{
    float fahrenheit;

    printf("Enter Fahrenheight: ");
    scanf("%f", &fahrenheit);

    float celsius = 5.0 / 9.0 * (fahrenheit - 32);

    printf("%.2f Fahrenheit = %.2f Celcius\n\n", fahrenheit, celsius);

    printf("Press Enter to exit...");
    getchar();
    getchar();

    return 0;
}