#include <stdio.h>

// Write a program that will output all the even numbers found in an array of 20 integers.
// Display also the sum of the values found.

int main()
{
    int i, arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20}, sum = 0;

    printf("The even numbers in the array inputted are: ");

    for (i = 0; i < 20; i++)
    {
        if (arr[i] % 2 == 0)
        {
            if (i < 19)
            {
                printf("%d, ", arr[i]);
            }
            else
            {
                printf("and %d", arr[i]);
            }
            sum += arr[i];
        }
    }

    printf("\nThe sum of the even numbers found in the array is: %d", sum);
    return 0;
}