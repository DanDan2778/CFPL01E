#include <stdio.h>

// Write a program that inputs two real numbers then exchanges their values.

int main()
{
    float first_number, scnd_number, temp;

    printf("Enter First Number: ");
    scanf("%f", &first_number);

    printf("Enter Second Number: ");
    scanf("%f", &scnd_number);

    temp = first_number;
    first_number = scnd_number;
    scnd_number = temp;

    printf("\nValue After Exchange First Number: %.2f\n", first_number);
    printf("Value After Exchange Second Number: %.2f\n\n", scnd_number);

    printf("Press Enter to exit...");
    getchar();
    getchar();

    return 0;
}