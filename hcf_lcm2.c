#include <stdio.h>

int main(void)
{
    int a, b, x, y, hcf, lcm;

    printf("enter 2 nums: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while (y != 0)
    {
        int remainder = x % y;

        x = y;
        y = remainder;
    }

    hcf = x;

    if (a == 0 || b == 0)
    {
        lcm = 0;
    }
    else
    {
        lcm = (a * b) / hcf;
        lcm = (lcm < 0) ? -lcm : lcm;
    }

    printf("hcf = %d\nlcm = %d", hcf, lcm);

    return 0;
}