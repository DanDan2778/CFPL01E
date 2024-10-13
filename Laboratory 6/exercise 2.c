#include <stdio.h>

// 2. Write a program containing a function that will get the factorial (!) of a number n, which is the 
// product of all numbers from 1 to n. 

int input();
int fact(int n);
int display(int factorial, int n);

int main() {
    int n = input();
    int factorial = fact(n);
    display(factorial, n);
    
    return 0;
}

int input(){
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);

    return n;
}

int fact(int n){
    int factorial = 1;
    int i;

    for (i = 1; i <= n; i++){
        factorial *= i;
    }
    return factorial;
}

int display(int factorial, int n){
    printf("The Factorial (!) of %d is %d", n, factorial);
}