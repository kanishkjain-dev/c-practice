#include <stdio.h>

int main(void)
{
    int n;

    do
    {
        printf("enter a height (1-8): ");
        scanf("%d", &n);
    }
    while(n < 1 || n > 8);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}