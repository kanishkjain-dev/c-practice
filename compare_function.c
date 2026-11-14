#include <stdio.h>

int compare(int a, int b)
{
    if (a > b)
        return a;
    else if (a < b)
        return b;
    else
        return 0;
}

int main(void) 
{
    int a, b;
    printf("enter 2 numbers: ");
    scanf("%i %i", &a, &b);

    int max = compare(a, b);

    if (max == 0)
        printf("both are equal");
    else
        printf("%d is bigger", max);
    
    return 0;
}