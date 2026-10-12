#include <stdio.h>

int main(void)
{
    int num;
    int reverse = 0;

    printf("enter a num: ");
    scanf("%i", &num);

    while (num > 0)
    {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    printf("reversed num: %i", reverse);
}