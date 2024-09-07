#include <stdio.h>

// Create a program that will compute and display the area of a square. Recall that the
// formula to compute for the area is AREA = S2 where S is the side of the square.

int main()
{
    float side;

    printf("Enter Length of Side (m): ");
    scanf("%f", &side);

    float area = side * side;

    printf("\nArea of a Square with Side %.2f m is %.2f m^2\n\n", side, area);

    printf("Press Enter to exit...");
    getchar();
    getchar();

    return 0;
}