// Write a program that will search for the largest value in an array of integers of length 10.

#include <stdio.h>

int main()
{
    int i, arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, max = arr[0];

    for (i = 1; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("The Largest value in the array is: %d", max);

    return 0;
}