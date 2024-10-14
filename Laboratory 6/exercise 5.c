#include <stdio.h>

// 5. Write a program containing a function that will convert a given measure in kilometers to 
// meters using the following conversion factor (1 km = 1000 m). 

float km_to_meters(float km);

int main() 
{
    float km, m;

    printf("Enter Distance in (km): ");
    scanf("%f", &km);

    m = km_to_meters(km);
    printf("Inputted km is equal to %.2fm", m);

    return 0;
}

float km_to_meters(float km){
    return km * 1000.00;
}