#include <stdio.h>

// Write a program that asks the user to enter a number n and display the first n even numbers.
// Example: if n=5, the first 5 even numbers are 2, 4, 6, 8 and 10.

int main()
{
    int n;

    printf("Enter a Number n: ");
    scanf("%d", &n);

    printf("The First %d Even Number are ", n);

    for (int i = 1; i <= n; i++)
    {

        if (i < n)
        {
            printf("%d, ", i * 2);
        }
        else
        {
            printf("and %d.", i * 2);
        }
    }
}