#include <stdio.h>

int main()
{
    int n;

    printf("enter a num: ");
    scanf("%i", &n);

    for (int i = 1; i <= 10; i ++)
    {
        int prod = n * i;
        printf("%i * %i = %i\n", n, i, prod);
    }
}