#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%i", &n);

    for (int i = 2; i <= n; i++)
    {
        int prime = 1;

        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }

        if (prime1)
        {
            printf("%i ", i);
        }
    }

    return 0;
}