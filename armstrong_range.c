#include <stdio.h>
#include <string.h>

int main(void)
{
    int l, u;
    int original;
    int sum = 0;

    printf("enter lower limit: ");
    scanf("%i", &l);
    printf("enter upper limit: ");
    scanf("%i", &u);

    for (int i = l; i < u; i++)
    {
        int num = i;
        i = original;

        for(int j = 0, len = strlen(i); j < i; j++)
        {
            int digit = num % 10;
            sum = sum + digit * digit * digit;
            num = num / 10;            
        }

        if (sum == original)
        {
            printf("%i ", i);
        }
        else
        {
            continue;
        }
    }
}

