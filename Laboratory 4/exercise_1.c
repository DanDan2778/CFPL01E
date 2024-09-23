#include <stdio.h>

// Write a program that will ask the user to enter a number n and display all the numbers from 1
// to n on a single line.

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }

    return 0;
}