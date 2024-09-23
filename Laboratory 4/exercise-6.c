#include <stdio.h>

// Write a program that will compute for and display the sum of all numbers divisible by 3 from 1
// to 1000.

int main()
{
    int sum = 0;

    for (int i = 1; i < 1000; i++)
    {
        if (i % 3 == 0)
        {
            sum += i;
        }
    }
    printf("The Sum of All Number Divisible by 3 from 1 to 1000 is %d.", sum);

    return 0;
}