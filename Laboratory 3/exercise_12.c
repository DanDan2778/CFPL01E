#include <stdio.h>

int main()
{
    int year, month, day;

    printf("Enter the Year (YYYY): ");
    scanf("%d", &year);

    printf("Enter the Month (MM): ");
    scanf("%d", &month);

    printf("Enter the Day (DD): ");
    scanf("%d", &day);

    switch (month)
    {
    case 1:
        printf("January %d, %d", day, year);
        break;
    case 2:
        printf("February %d, %d", day, year);
        break;
    case 3:
        printf("March %d, %d", day, year);
        break;
    case 4:
        printf("April %d, %d", day, year);
        break;
    case 5:
        printf("May %d, %d", day, year);
        break;
    case 6:
        printf("June %d, %d", day, year);
        break;
    case 7:
        printf("July %d, %d", day, year);
        break;
    case 8:
        printf("August %d, %d", day, year);
        break;
    case 9:
        printf("September %d, %d", day, year);
        break;
    case 10:
        printf("October %d, %d", day, year);
        break;
    case 11:
        printf("November %d, %d", day, year);
        break;
    case 12:
        printf("December %d, %d", day, year);
        break;

    default:
        printf("Invalid Month");
        break;
    }

    return 0;
}