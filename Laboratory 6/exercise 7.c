#include <stdio.h>

// 7. Write a program that inputs 5 numbers and passes them one at a time to function even which 
// uses the modulus operator to determine if an integer is even.

void inputs(int enter[5]);
int evennumbers_check();

int main() 
{
    int numbers, enter[5];

    inputs(enter);
    


    return 0;
}

void inputs(int enter[5]){
    int i;

    for (i = 0; i < 5; i++){
        printf("Input Number : ");
        scanf("%d", &enter[i]);
    }
    
}