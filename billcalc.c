#include <stdio.h>

int main()
{
    int a;
    float bill;

    printf("enter electricity units consumed: ");
    scanf("%i", &a);

    if(a < 0)
    {
        printf("invalid units");
    }
    else if(a <= 100) //0-100 is 5 inr
    {
        bill = a * 5;
        printf("ur bill: %.2f", bill);
    }
    else if(a <= 200) //101-200 is 7 inr
    {
        bill = 500 + (a-100)*7; 
        printf("ur bill: %.2f", bill);
    }
    else
    {
        bill = 1200 + (a - 200) * 11;
        printf("ur bill : %.2f", bill);
    }
    
    return 0;
}