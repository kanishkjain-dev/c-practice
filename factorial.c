#include <stdio.h>

int fact (int n);

int main()
{
    int f;
    printf("enter a number: ");
    scanf("%i", &f);

    f = fact(f);
    printf("%i", f);

    return 0;
}

int fact (int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * fact(n-1);
}