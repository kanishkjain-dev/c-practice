#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%i", &n);

    for (int i = 2; i <= n; i++)
    {
        int is_prime = 1;

        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                is_prime = 0;
                break;
            }
        }

        if (is_prime == 1)
        {
            printf("%i ", i);
        }
    }
}