#include <stdio.h>

// 9. Write a containing a function that takes a 5-digit integer and returns the number with its digit 
// reversed. For example, if the number is 12345, the function should return 54321.

int reversed_5_integer(int n);

int main() 
{
    int get, reversed;

    printf("Enter a 5-Digit Integer: ");
    scanf("%d", &get);

    reversed = reversed_5_integer(get);

    printf("Reversed Value: %d", reversed);
    return 0;
}

int reversed_5_integer(int n){
    int reversed_n = 0;

    while (n != 0){
        int temp = n % 10;
        reversed_n = reversed_n * 10 + temp;
        n /= 10;
    }

    return reversed_n;
}