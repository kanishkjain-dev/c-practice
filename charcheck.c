#include <stdio.h>

int main()
{
    char charac;

    printf("enter a character: ");
    scanf(" %c", &charac);

    if (charac >= '0' && charac <= '9')
    {
        printf("it is a digit");
    }
    else if ((charac >= 'A' && charac <= 'Z') ||
        (charac >= 'a' && charac <= 'z'))
    {
        printf("it is an alphabet");
    }
    else
    {
        printf("it is a special character");
    }

    return 0;

}