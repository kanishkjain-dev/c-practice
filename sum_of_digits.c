#include <stdio.h>

int main(void)
{
    int num;
    int sum = 0;

    printf("enter a number: ");
    scanf("%i", &num);

    while(num > 0)
    {
        int digit = num % 10;
        sum += digit;
        num = num / 10;
    }

    printf("sum of digits = %i", sum);
}