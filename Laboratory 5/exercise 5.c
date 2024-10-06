// Write a program that will print the even positioned elements in an array of 10 integers.

#include <stdio.h>

int main()
{
    int i, arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("The even positioned elements in the array are: ");

    for (i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}