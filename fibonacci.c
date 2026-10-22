#include <stdio.h>

int fibo(int n);

int main()
{
    int f;
    printf("enter a num: ");
    scanf("%i", &f);

    f = fibo(f);

    printf("fibonacci seq: %i", f);
}

int fibo(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return fibo(n - 1) + fibo(n -2);
}
