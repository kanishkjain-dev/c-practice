#include <stdio.h>

int main()
{
    int n;

    printf("enter a number: ");
    scanf("%i", &n);

    int a = n % 2;

    if (a != 0)
    {
        printf("it is an odd number");
    }
    else 
    {
        printf("it is an even number");   
    }

    return 0;
}