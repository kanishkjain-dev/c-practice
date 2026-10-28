#include <stdio.h>

int main(void)
{
    int n, temp, digit, sum = 0, count = 0;

    printf("enter a num: ");
    scanf("%d", &n);

    temp = n;

    while (temp > 0)
    {
        count++;
        temp /= 10;
    }

    temp = n;

    while (temp > 0)
    {
        digit = temp % 10;
        int power = 1;

        for (int i = 0; i < count; i++)
        {
            power = power * digit;

            sum = sum + power;
            temp = temp / 10;
        }

        printf (sum == n ? "armstrong" : "nope");
    }
    return 0;
    
}