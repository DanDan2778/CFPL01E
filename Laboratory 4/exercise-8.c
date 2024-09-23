#include <stdio.h>

// Write a program that will accept a number n and display the sum of all even numbers and the
// sum of all odd numbers from 1 to n.

int main()
{
    int n, sum_even = 0, sum_odd = 0;

    printf("Enter a Number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum_even += i;
        }
        else
        {
            sum_odd += i;
        }
    }

    printf("The sum of all even numbers from 1 to %d is %d\n", n, sum_even);
    printf("The sum of all odd numbers from 1 to %d is %d\n", n, sum_odd);

    return 0;
}