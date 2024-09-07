#include <stdio.h>

// Create a program that will get as input from the user the base and height of a tnangle.
// Compute and display the area of the rectangle.

int main()
{
    float base, height;

    printf("Enter Length of the Base (m): ");
    scanf("%f", &base);

    printf("Enter  the Height (m): ");
    scanf("%f", &height);

    float area = 0.5 * base * height;

    printf("The Area of the Triangle with a Base of %.2f m and a Height of %.2f m is %.2f m^2\n\n", base, height, area);

    printf("Press Enter to exit...");
    getchar();
    getchar();

    return 0;
}