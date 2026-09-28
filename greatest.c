#include <stdio.h>

int main()
{
    int a, b, c;

    printf("enter 3 numbers: ");
    scanf("%i%i%i", &a, &b, &c);

    if(a > b && a > c)
    {
        printf("%i is greatest", a);
    }
    else if(b > a && b > c)
    {
        printf("%i is greatest", b);
    }
    else if(a == b && c < a)
    {
        printf("%i and %i are greater", a, b);
    }
    else if(b == c && a < b)
    {
        printf("%i and %i are greater", b, c);
    }
    else if(a == c && b < a)
    {
        printf("%i and %i are greater", a, c);
    }
    else
    {
        printf("%i is greatest", c);
    }
}