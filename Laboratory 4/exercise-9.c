#include <stdio.h>

// Write a program that will display the following pattern, given the value of n. Example: If n=4,
// output:

int main()
{
    int n;

    printf("Enter a Number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}