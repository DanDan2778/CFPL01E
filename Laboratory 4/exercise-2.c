#include <stdio.h>

// Write a program that will ask the user to enter a number n and display the sum of all numbers from 1 to n.

int main()
{
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
        sum += i;
    }

    printf("\nSum of all numbers from 1 to %d is %d\n", n, sum);

    return 0;
}