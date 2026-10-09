#include <stdio.h>

int main()
{
    int a;
    int sum = 0;
    printf("enter a limit: ");
    scanf("%i", &a);

    for(int i = 0; i <= a; i += 2)
    {
        sum = sum + i;
    }
    printf("sum = %i", sum);
}