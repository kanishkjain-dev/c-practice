#include <stdio.h>

int main(void)
{
    int n, f = 1; 
    printf("enter a num: ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("factorial = 1");
        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }

    printf("factorial = %d", n, f);
}