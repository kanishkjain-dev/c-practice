#include <stdio.h>

int main()
{
    int day;

    do
    {
        printf("enter a number (1 to 7): ");
        scanf("%i", &day);
    }
    while(day < 1 || day > 7);

    switch (day)
    {
        case 1:
        printf("monday");
        break;

        case 2:
        printf("tuesday");
        break;

        case 3:
        printf("wednesday");
        break;

        case 4:
        printf("thursday");
        break;

        case 5:
        printf("friday");
        break;

        case 6:
        printf("saturday");
        break;

        case 7:
        printf("sunday");
        break;
    }
    return 0;
}