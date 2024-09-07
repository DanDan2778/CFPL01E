#include <stdio.h>

// Make a program that will convert an inputted number in inches (in) and display its
// equivalent measure in feet (ft).

int main()
{
    float inch;

    printf("Enter Measurement in Inches (in): ");
    scanf("%f", &inch);

    float feet = inch / 12.0;

    printf("Equivalent Measurement (in) to (ft): %.2f ft\n\n", feet);

    printf("Press Enter to exit...");
    getchar();
    getchar();

    return 0;
}