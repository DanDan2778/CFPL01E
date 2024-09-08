#include <stdio.h>
// Create a program that asks for a distance in kilometers and
// converts it into its metric

int main()
{
    float distance_km;

    printf("Input Distance (km): ");
    scanf("%f", &distance_km);

    float meters = distance_km * 1000;
    float cm = meters * 100;

    printf("Distance in meters (m): %.2f m\n", meters);
    printf("Distance in centimeters (cm): %.2f cm\n\n", cm);

    printf("Press Enter to exit...");
    getchar();
    getchar();

    return 0;
}
