// Write a program that will take the sum of all the array elements greater than 80 in an
// array of 10 elements completely filled by the user.

#include <stdio.h>

int main()
{
    int i, arr[10], sum = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Enter the value of Array[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (arr[i] > 80)
        {
            sum += arr[i];
        }
    }
    printf("The sum of all the value of array that is greater than 80 is: %d", sum);

    return 0;
}