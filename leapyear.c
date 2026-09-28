#include <stdio.h>

int main()
{
    int year;

    printf("enter year: ");
    scanf("%i", &year);

    if (year % 400 == 0)
    {
        printf("it is a leap year");
    }
    else if (year % 4 == 0 && year % 100 != 0)
    {
        printf("it is a leap year");
    }
    else
    {
        printf("it is not a leap year");
    }
}