#include <stdio.h>

int main()
{
    int a;
    int sum = 0;
    printf("enter a limit: ");
    scanf("%i", &a);

    for(int i = 1; i <= a; i++)
    {
        sum = sum + i;
    }
    printf("sum = %i", sum);
}