#include <stdio.h>

int main()
{
    int a, b, c;

    message:
    printf("enter 3 sides of a valid triangle: ");
    scanf("%i%i%i", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0 &&
    a + b > c && b + c > a && a + c > b)
    {
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
    else
    {
        printf("invalid triangle\n");
        goto message;
    }

}