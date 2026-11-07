#include <stdio.h>

int main(void)
{
    int n;

    do
    {
        printf("enter a width of wing (3-8): ");
        scanf("%d", &n);
    }
    while(n < 3 || n > 8);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        
        for (int j = 0, space = (n * 2) - (i * 2); j < space; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            printf("#");
        }
        for (int j = 0; j < i * 2; j++)
        {
            printf(" ");
        }
        for (int j = n - i; j > 0; j--)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
