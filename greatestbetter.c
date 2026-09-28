#include <stdio.h>

int main()
{
    int a, b, c;

    printf("enter 3 numbers: ");
    scanf("%i%i%i", &a, &b, &c);

    int greatest = a;

    if (b > greatest)
    {
        greatest = b;
    }

    if (c > greatest)
    {
        greatest = c;
    }
    printf("%i is greatest", greatest);
    
    return 0;
}