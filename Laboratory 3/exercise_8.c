#include <stdio.h>
#include <ctype.h>

int main()
{
    char yes_no;
    float side[3], perimeter, base, height;

    printf("Do you Want to Compute the Perimeter of a Triangle (y/n): ");
    scanf("%c", &yes_no);

    yes_no = toupper(yes_no);

    if (yes_no == 'Y')
    {
        printf("Enter the Length of the Three Sides of the Triangle in meters (m): ");
        for (int i = 0; i < 3; i++)
        {
            printf("Enter the Length of Side %d: ", i + 1);
            scanf("%f", &side[i]);
        }
        perimeter = side[0] + side[1] + side[2];

        printf("\nThe Perimeter of the Triangle is %.2f m", perimeter);
    }
    else
    {
        printf("Enter the base of the Trianglein meters (m): ");
        scanf("%f", &base);

        printf("Enter the height of the Triangle in meters (m): ");
        scanf("%f", &height);

        float area = 0.5 * height * base;

        printf("\nThe Area of the Triangle is %.2f m", area);
    }
    return 0;
}