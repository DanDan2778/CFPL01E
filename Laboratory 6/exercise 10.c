#include <stdio.h>

// 10. Write a program containing a function that will return the largest of 3 floating-point numbers. 

float largest(float n[3]);

int main() {
    float n[3], max;
    int i;

    for (i = 0; i < 3; i++){
        printf("Enter Floating point %d: ", i + 1);
        scanf("%f", &n[i]);
    }

    max = largest(n);

    printf("Largest Floating Point is: %.2f", max);

    return 0;
}

float largest(float n[3]){
    float max = n[0];
    int i;

    for (i = 1; i < 3; i++){
        if(n[i] > max){
            max = n[i];
        }
    }

    return max;    
    }