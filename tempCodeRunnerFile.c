#include <stdio.h>

int main(void)
{
    for(int i = 1; i <= 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i * 2 - 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    for (int i = 4 - 1; i > 0; i--)
    {
        for (int j = 0; j < 4 - i; j++)
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