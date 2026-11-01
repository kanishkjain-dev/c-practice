#include <stdio.h>

int fibo(int n);

int main()
{
    int f;

    printf("Enter a number: ");
    scanf("%i", &f);

    f = fibo(f);

    printf("Fibonacci number: %i", f);
}

int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    return fibo(n - 1) + fibo(n - 2);
}