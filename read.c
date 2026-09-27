#include <stdio.h>

int main()
{
    int a;
    float b;
    char c;
    double d;
    long e;

    printf("enter integer: ");
    scanf("%i", &a);

    printf("enter floating value: ");
    scanf("%f", &b);

    printf("enter character: ");
    scanf(" %c", &c);

    printf("enter double: ");
    scanf("%lf", &d);

    printf("enter long int: ");
    scanf("%li", &e);

    printf("all of ur inputs: %i\n%.2f\n%c\n%.2f\n%li\n", a, b, c, d, e);
}