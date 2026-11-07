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
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}