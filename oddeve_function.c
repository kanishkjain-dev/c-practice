#include <stdio.h>

int oddeve(int a)
{
    if (a % 2 == 0)
        return 1;
    else
        return 0;
}

int main(void)
{
    int a;
    printf("enter a num: ");
    scanf("%d", &a);

    int check = oddeve(a);

    if(check)
    {
        printf("even");
    }
    else 
    {
        printf("odd");
    }
}