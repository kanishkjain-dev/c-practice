#include <stdio.h>

int main()
{
    int n;

    printf("enter a number: ");
    scanf("%i", &n);

    int a = n % 5;

    (a != 0) ? printf("number is not divisible by 5") : printf("number is divisible by 5");

    return 0;
}