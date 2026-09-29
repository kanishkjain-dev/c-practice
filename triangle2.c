#include <stdio.h>

int main()
{
    int a, b, c;

    printf("enter 3 sides for the triangle: ");
    scanf("%i%i%i", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0 &&
    a + b > c && b + c > a && a + c > b)
    {
        printf("triangle is valid");
    }
    else 
    {
        printf("triangle is invalid");
    }

    return 0;
}