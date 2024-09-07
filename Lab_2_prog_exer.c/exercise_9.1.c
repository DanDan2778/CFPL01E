#include <stdio.h>

// Make a program that will accept a number in square meters (m2) and display its
// equivalent measure in hectares (has). Hint: 1000 m2 = 1 ha

int main()
{
    float sqr_m;

    printf("Enter Area (m^2): ");
    scanf("%f", &sqr_m);

    float has = sqr_m / 10000.0;

    printf("%.2f m^2 is equal to %.3f has.\n\n", sqr_m, has);

    printf("Press Enter to exit...");
    getchar();
    getchar();

    return 0;
}