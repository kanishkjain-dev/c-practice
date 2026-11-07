#include <stdio.h>

int main(void)
{
    int n;

    do
    {
        printf("enter a height (3-8): ");
        scanf("%d", &n);
    }
    while(n < 3 || n > 8);

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}