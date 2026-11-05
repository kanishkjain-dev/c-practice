#include <stdio.h>

int main()
{
    int n, prime =1;

    printf("enter a number: ");
    scanf("%d", &n);

    if (n < 2)
    {
        prime = 0;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 1)
    {
        printf("%d is prime", n);
    }
    else
    {
        printf("not prime");
    }
}