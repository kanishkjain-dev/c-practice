#include <stdio.h>

int main(void)
{
    int a, b, check, hcf = 0, lcm;

    printf("enter 2 nums: ");
    scanf("%d %d", &a, &b);

    check = (a < b) ? a : b;
    
    for(int i = 1; i <= check; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }

    lcm = (a * b)/hcf;

    printf("hcf = %i\nlcm = %i", hcf, lcm);
    return 0;
}