#include <stdio.h>

// 7. Write a program that inputs 5 numbers and passes them one at a time to function even which 
// uses the modulus operator to determine if an integer is even.

void inputs(int enter[5]);
char* evennumbers_checker(int enter);

int main() 
{
    int i, numbers, enter[5], even, odd;
    char* evenChecker;

    for (i = 0; i < 5; i++){
        printf("Input Number : ");
        scanf("%d", &enter[i]);
    }  
    for (i = 0; i < 5; i++){
    evenChecker = evennumbers_checker(enter[i]);

    printf("%d %s", enter[i], evenChecker);
    }

    return 0;
}

char* evennumbers_checker(int enter){
    if (enter % 2 == 0){
        return "is an Even Number!!\n";
    } else{
        return "is not an Even Number!!\n";
    }
}