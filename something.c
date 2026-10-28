#include <stdio.h>

int sum(int n)
{
    
    if (n == 0)
        return 0;

    return n + sum(n - 1);
}


int main()
{   
    int a;
    scanf("%d", &a);

    printf("%i ", sum(a));

    return 0;
}