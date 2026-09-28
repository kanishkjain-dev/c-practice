#include <stdio.h>

int main()
{
    int n;

    printf("enter a number: ");
    scanf("%i", &n);

    if (n < 0)
    {
        printf("negative number");
    }
    else if (n > 0)
    {
        printf("positive number");
    }
    else 
    {
        printf("zero");
    }
    
    return 0;
}