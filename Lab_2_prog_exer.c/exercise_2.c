#include <stdio.h>

// Write a program that asks the user to enter the radius of a circle and then computes for
// its area. Recall that the formula to compute for the area is AREA = Pi x R2. where R is the
// radius. The output must be similar to the one below:
// The area ot the circle with radius 2 cm is 12.56 cm2

int main()
{
    float radius;
    float pi = 3.14159;

    printf("Enter Radius (cm): ");
    scanf("%f", &radius);

    float area = pi * radius * radius;

    printf("\nThe area ot the circle with radius %.2f cm is %.2f cm^2\n\n", radius, area);

    printf("Press Enter to exit...");
    getchar();
    getchar();

    return 0;
}