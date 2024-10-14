#include <stdio.h>

// 6. Write a program containing a function that will return the smallest of 3 floating-point 
// numbers.

float sorting_smallest(float floating_point[3]);

int main() 
{
    float floating_point[3];
    float smallest;
    int i;

    for (i = 0; i < 3; i++){
        printf("Enter 3 Floating Point: ");
        scanf("%f", &floating_point[i]);
        }   

    smallest = sorting_smallest(floating_point); 

    printf("Smallest Floating Point Inputted: %.2f", smallest);

    return 0;
}

float sorting_smallest(float floating_point[3]){
    int i, j, temp;

    for (i = 0; i < 3; i++){
        for (j = i + 1; j < 3; j++){
            if (floating_point[i] > floating_point[j]){
                temp = floating_point[i];
                floating_point[i] = floating_point[j];
                floating_point[j] = temp;
            }
        }
    }
    return floating_point[0];
}