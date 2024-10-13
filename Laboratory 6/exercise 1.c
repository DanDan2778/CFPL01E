#include <stdio.h>

// 1. Write a program that will illustrate the use of a function for computing the square of a number. 
// There must be three other functions aside from main( ). The first function must responsible for 
// inputting the data, the second for computation of squares and the third, for displaying the result. 
// Sample Run: 
// Input N: 3 
// The square of 1 is 1 
// The square of 2 is 4 
// The square of 3 is 9 



int input();
int compute_square(int num);
void display(int num, int square);

int main (){
    int n = input();

    for (int i = 1; i <= n; i++){
        int square = compute_square(i);
        display(i, square);
    }

    return 0;
}

int input(){
    int number;
    printf("Enter a Number: ");
    scanf("%d", &number);

    return number;
}

int compute_square(int num){
    int square = num * num;
    
    return square;
}

void display(int num, int square){
    printf("The square of %d is %d\n", num, square);
}