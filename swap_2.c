#include <stdio.h>

int main()
{
    int a, b, c;

    printf("enter 2 numbers: ");
    scanf("%i%i", &a, &b);

    c = a;
    a = b;
    b = c;

    printf("after swap: %i, %i", a, b);
}