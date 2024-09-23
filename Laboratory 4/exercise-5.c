#include <stdio.h>

// Write a program that will compute for n! (n factorial) which is the product of all numbers from
// 1 to n.

int main()
{
    int n;

    printf("Enter a Number n: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial of negative number is undefined.");
    }
    else
    {
        int factorial = 1;

        for (int i = 1; i <= n; i++)
        {
            factorial *= i;
        }

        printf("The Factorial of %d is %d.", n, factorial);
    }

    return 0;
}