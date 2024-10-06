#include <stdio.h>

// Write a program that will output all the odd numbers found in an array of 20 integers.
// Display also the sum of the values found.

int main()
{
    int i, arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20}, sum = 0;

    printf("The odd numbers in the array are: ");

    for (i = 0; i < 20; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]);
            sum += arr[i];
        }
    }

    printf("\nThe sum of the odd numbers found in the array inputted is: %d", sum);

    return 0;
}