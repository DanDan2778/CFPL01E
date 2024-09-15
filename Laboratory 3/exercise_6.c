#include <stdio.h>

int main()
{
    float numbers[3];
    int i, j = 0;

    for (i = 0; i < 3; i++)
    {
        printf("Enter Number %d: ", i + 1);
        scanf("%f", &numbers[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        for (j = i + 1; j < 3; j++)
        {
            if (numbers[i] > numbers[j])
            {
                float temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    printf("Sorted inputted number: %.2f, %.2f, %.2f", numbers[0], numbers[1], numbers[2]);

    return 0;
}