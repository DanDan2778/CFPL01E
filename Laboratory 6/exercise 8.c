#include <stdio.h>

// 8. Write a program containing a function that returns the Greatest Common Divisor (GCD) of 
// two integers. The GCD of two integers is the largest integer that evenly divides each of the two 
// numbers. 

int find_gcd(int a, int b);

int main() 
{
    int num1, num2;

    printf("Enter Two Integers: ");
    scanf("%d %d", &num1, &num2);

    int gcd = find_gcd(num1, num2);

    printf("GCD of %d and %d is: %d", num1, num2, gcd);

    return 0;
}

int find_gcd(int a, int b){
    if (b == 0){
        return a;
    } else{
        return find_gcd(b, a % b);
    }
}