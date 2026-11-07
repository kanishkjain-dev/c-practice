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

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}