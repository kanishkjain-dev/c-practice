#include <stdio.h>

int main(void)
{
    int num;
    int largest = 0;

    printf("enter a number: ");
    scanf("%i", &num);

    if(num < 0)
    {
        num = num * -1;
    }

    while (num > 0)
    {
        int digit = num % 10;
        if (digit > largest)
        {
            largest = digit;
        }
        num /= 10;
    }
    
    printf("largest digit = %i", largest);
}