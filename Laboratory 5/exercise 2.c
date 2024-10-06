#include <stdio.h>

// Write a program that will search for the smallest value in an array of integers of length

int main()
{
    int i, arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, min = arr[0];

    for (i = 1; i < 10; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("The smallest value in the array is: %d", min);

    return 0;
}