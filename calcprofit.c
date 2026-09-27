#include <stdio.h>

int main()
{
    float sp, cp;
    printf("what u sold it for: ");
    scanf("%f", &sp);

    printf("what u paid: ");
    scanf("%f", &cp);

    if(sp > cp)
    {
        printf("ur profit = %.2f", sp - cp);
    }
    else if(sp < cp)
    {
        printf("ur loss = %.2f", cp - sp);
    }
    else 
    {
        printf("neither profit, nor loss\n");
    }
    return 0;
}