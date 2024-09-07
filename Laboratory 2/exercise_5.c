#include <stdio.h>

// Create a program that will input a number in kilowatt and display its equivalent measure
// in watts.

int main()
{
    float kilowatt;

    printf("Enter Killowatt/s: ");
    scanf("%f", &kilowatt);

    float watts = kilowatt * 1000.0;

    printf("Equivalent Kilowatt/s in Watt/s: %.2f Watts\n\n", watts);

    printf("Press Enter to exit...");
    getchar();
    getchar();

    return 0;
}