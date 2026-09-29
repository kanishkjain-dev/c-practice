#include <stdio.h>

int main()
{
    int a, b, c;

    do
    {
        printf("enter 3 sides of a valid triangle: ");
        scanf("%i%i%i", &a, &b, &c);
    }
    while(!(a > 0 && b > 0 && c > 0 &&
    a + b > c && b + c > a && a + c > b));

    if (a == b && b == c)
    {
        printf("equilateral triangle");
    }
    else if(a == b || b == c || a == c)
    {
        printf("isosceles triangle");
    }
    else
    {
        printf("scalene triangle");
    }

}