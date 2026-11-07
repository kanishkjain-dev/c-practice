#include <stdio.h>

int main(void)
{
    int n;

    do
    {
        printf("enter diamond height (3-15, odd numbers only): ");
        scanf("%d", &n);
    }
    while (n < 3 || n > 15 || n % 2 == 0);
    
    for(int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i * 2 - 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i * 2 - 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}