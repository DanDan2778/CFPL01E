#include <stdio.h>

// Write a program that will arrange the elements of a 10-integer array in ascending order.

int main()
{
    int i, j, arr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}, temp;

    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("The array in ascending order is: ");

    for (i = 0; i < 10; i++)
    {
        if (i < 9)
        {
            printf("%d, ", arr[i]);
        }
        else
        {
            printf("%d", arr[i]);
        }
    }

    return 0;
}