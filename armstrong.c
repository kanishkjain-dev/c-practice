#include <stdio.h>

int main(void)
{
    int n, temp, digit, sum = 0, count = 0;

    printf("enter a num: ");
    scanf("%d", &n);
    temp = n;

    while (temp)
    {
        count++;
        temp /= 10;
    }

    temp = n;

    while (temp)
    {
        digit = temp % 10;
        int power = 1;

        for (int i = 0; i < count; i++)
            power *= digit;

        sum += power;
        temp /= 10;
    }

    printf(sum == n ? "Armstrong" : "Not Armstrong");

    return 0;
}