#include <stdio.h>

int prime(int a)
{
    if (a < 2)
        return 0;
        
    for (int i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
            return 0;
    }
    return 1;
}

int main(void)
{
    int a;
    printf("enter a num: ");
    scanf("%d", &a);

    int check = prime(a);

    if (check)
        printf("prime");
    else
        printf("not prime");

    return 0;
}
