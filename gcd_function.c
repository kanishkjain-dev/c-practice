#include <stdio.h>

int gcd(int x, int y);

int main(void)
{
    int a, b, hcf;

    printf("enter 2 nums: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0)
    {
        printf("enter positive integers!");
        return 0;
    }

    hcf = gcd(a, b);

    printf("hcf = %d", hcf);

    return 0;
}

int gcd(int x, int y)
{

    while (y != 0)
    {
        int remainder = x % y;

        x = y;
        y = remainder;
    }

    return x;
}