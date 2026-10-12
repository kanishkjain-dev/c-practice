#include <stdio.h>

int main(void)
{
    int num;
    int original;
    int sum = 0;

    printf("enter a 3 digit number: ");
    scanf("%i", &num);

    original = num;

    for (int i = 0; i < 3; i++)
    {
        int digit = num % 10;
        sum = sum + digit * digit * digit;
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