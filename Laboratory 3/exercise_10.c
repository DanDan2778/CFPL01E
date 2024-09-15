#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{

    char size[3];
    int i;
    float price, discount = 0;

    printf("Choose the size of your Shirt \nBase on the Sizes Below: \n");
    printf("(XS, S, M, L, XL): ");
    scanf("%2s", size);

    for (int i = 0; size[i] != '\0'; i++)
    {
        size[i] = toupper(size[i]);
    }

    printf("Enter the Price of the Shirt: ");
    scanf("%f", &price);

    if (price >= 500 && strcmp(size, "XL") == 0)
    {
        discount = 100;
        printf("Price P%.2f\n", price);
        printf("Discount: P%.2f\n", discount);
        printf("Discounted Price: P%.2f\n", price - discount);
    }
    else if (price > 400 && strcmp(size, "L") == 0)
    {
        discount = 50;
        printf("Price: P%.2f\n", price);
        printf("Discount: P%.2f\n", discount);
        printf("Discounted Price: P%.2f\n", price - discount);
    }

    else
    {
        printf("Price: %.2f", price);
    }

    return 0;
}