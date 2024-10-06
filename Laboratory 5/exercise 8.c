#include <stdio.h>

// Write a program that will compute and display the average of a 20-element array whose
//  values are inputted by the user.

int main()
{
    int i;
    float arr[20], average, sum = 0;

    for (i = 0; i < 20; i++)
    {
        printf("Enter the value of Array[%d]: ", i);
        scanf("%f", &arr[i]);
        sum += arr[i];
    }
    average = sum / 20;

    printf("The average of the array inputted is: %.2f", average);

    return 0;
}