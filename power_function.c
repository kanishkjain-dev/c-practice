#include <stdio.h>

int power (int base, int exp)
{
    int result = 1;
    while(exp-- > 0) result *= base;
    return result;
}

int main(void)
{
    int a, b;

    printf("enter a base: ");
    scanf("%d", &a);
    printf("enter an exponent: ");
    scanf("%d", &b);

    int result = power(a, b);

    printf("answer = %d", result);

    return 0;
}