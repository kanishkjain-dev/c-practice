#include <stdio.h>

int main()
{
    int a, b, c;

    printf("enter 3 angles for the triangle: ");
    scanf("%i%i%i", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0 && a + b + c == 180)
    {
        printf("triangle is valid");
    }
    else 
    {
        printf("triangle is invalid");
    }

    return 0;
}