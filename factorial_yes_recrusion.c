#include <stdio.h>

int fact(int a)
{
    if (a == 0)
    {
        return 1;
    }
    return a * fact(a - 1);
}

int main(void)
{
    int a;
    printf("enter a number: ");
    scanf("%d", &a);

    if(a < 0)
    {
        printf("invalid input");
        return 0;
    }

    int f = fact(a);

    printf("factorial of %d = %d", a, f);
    return 0;
}