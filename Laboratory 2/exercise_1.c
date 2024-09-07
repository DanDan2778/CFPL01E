#include <stdio.h>
// Create a program that asks for a distance in kilometers and
// converts it into its metric

int main()
{
    float distance_km;

    printf("Input Distance in kilometer: ");
    scanf("%f", &distance_km);

    float meters = distance_km * 1000;
    float cm = meters * 100;

    printf("kilometers to meters: %.2f meters\n", meters);
    printf("kilometers to centimeters: %.2f centimeters\n\n", cm);

    printf("Press Enter to exit...");
    getchar();
    getchar();

    return 0;
}