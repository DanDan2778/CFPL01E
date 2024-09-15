#include <stdio.h>
#include <limits.h>

int main()
{
    int numbers[5], i;
    int smallest = INT_MAX;

    printf("Enter 5 Integers: \n");
    for (i = 0; i < 5; i++)
    {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 5; i++)
    {
        if (numbers[i] < smallest)
        {
            smallest = numbers[i];
        }
    }

    printf("Smallest Inputted Number: %d", smallest);

    return 0;
}