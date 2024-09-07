#include <stdio.h>

// Write a program that inputs two real numbers then exchanges their values.

int main()
{
    int first_number, scnd_number, temp;

    printf("Enter First Number: ");
    scanf("%d", &first_number);

    printf("Enter Second Number: ");
    scanf("%d", &scnd_number);

    temp = first_number;
    first_number = scnd_number;
    scnd_number = temp;

    printf("Value After Exchange First Number: %d\n", first_number);
    printf("Value After Exchange Second Number: %d\n\n", scnd_number);

    printf("Press Enter to exit...");
    getchar();
    getchar();

    return 0;
}