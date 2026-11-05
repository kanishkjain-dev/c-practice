#include <stdio.h>

int power(int base, int exp);

int main(void)
{
    int u, l, temp, temp2, digit, sum;

    printf("enter a range: ");
    scanf("%d %d", &l, &u);

    for (int n = l; n <= u; n++)
    {
        temp = n;
        int len = 0;
        sum = 0;

        // count digits
        while (temp > 0)
        {
            len++;
            temp /= 10;
        }

        if (n == 0)
        {
            len = 1;
        }

        temp2 = n;

        //giving each digit power and then summing up the bs 
        while (temp2 > 0)
        {
            digit = temp2 % 10;
            sum += power(digit, len);
            temp2 /= 10;
        }

        if (sum == n)
        {
            printf("%d ", n);
        }
    }
    return 0;
}

int power(int base, int exp)
{
    int result = 1;
    while (exp-- > 0)
    {
        result *= base;
    }
    return result;
}