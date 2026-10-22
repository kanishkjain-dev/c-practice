#include <stdio.h>

int main(void)
{
    int num;
    int smallest = 10;

    printf("enter a number: ");
    scanf("%i", &num);

    if(num < 0)
    {
        num = num * -1;
    }

    if (num == 0)
    {
        printf("smallest digit = 0");
        return 0;
    }

    while (num > 0)
    {
        int digit = num % 10;
        if (digit < smallest)
        {
            smallest = digit;
        }
        num /= 10;
    }
    
    printf("smallest digit = %i", smallest);
}