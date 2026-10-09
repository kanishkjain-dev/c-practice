#include <stdio.h>

int main()
{
    int days;
    printf("enter number of days: ");
    scanf("%i", &days);

    int years = days / 365;
    int months = (days % 365) / 30;
    days = ((days % 365) % 30);

    printf("answer = %i years %i months %i days", years, months, days);
}