#include <stdio.h>

int main(void)
{
    int num;
    int original;
    int sum = 0;
    int count = 0;

    printf("enter a number: ");
    scanf("%i", &num);

    original = num;

    do
    {
        count++;
        num = num / 10;
    }
    while (num > 0);

    for (int i = 0; i < count; i++)
    {
        int digit = num % 10;
        int digitsss = 0;
        
        digitsss += digit * digit;

        sum = sum + digitsss;
        num = num / 10;
    }

    if (sum == original)
    {
        printf("armstrong\n");
    }
    else
    {
        printf("nope\n");
    }
}
