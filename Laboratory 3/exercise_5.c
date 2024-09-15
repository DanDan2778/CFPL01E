#include <stdio.h>
#include <limits.h>

int main()
{
    int numbers[5], i;
    int smallest = INT_MAX;
    int highest = INT_MIN;

    printf("Enter 5 Integers: \n");
    for (i = 0; i < 5; i++)
    {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        if (numbers[i] < smallest)
        {
            smallest = numbers[i];
        }
        if (numbers[i] > highest)
        {
            highest = numbers[i];
        }
        for (int j = 0; j < i; j++)
        {
            if (numbers[i] == numbers[j])
            {
                printf("Number already inputted, please enter a different number: ");
                i--;
                break;
            }
        }
    }

    printf("Smallest Inputted Number: %d\n", smallest);
    printf("Highest Inputted Number: %d", highest);

    return 0;
}