#include <stdio.h>

int main(void)
{
    int num;

    printf("enter a num: ");
    scanf("%i", &num);

    int fir_dig;
    int last_dig = num % 10;

    while (num > 10)
    {
        num /= 10;
    }
    fir_dig = num;

    printf("first digit = %i and last digit = %i", fir_dig, last_dig);
}