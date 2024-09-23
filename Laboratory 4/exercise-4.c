#include <stdio.h>

// Write a program that asks the user to enter a number n and display the first n odd numbers.
// Example: if n=5, the first 5 odd numbers are 1, 3, 5, 7 and 9.

int main()
{
    int n;

    printf("Enter a Number n: ");
    scanf("%d", &n);

    printf("The First %d Odd Number are ", n);

    for (int i = 1; i <= n; i++)
    {
        if (i < n)
        {
            printf("%d, ", i * 2 - 1);
        }
        else
        {
            printf("and %d.", i * 2 - 1);
        }
    }
}