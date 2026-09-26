#include <stdio.h>

int main(void)
{
    int h;

    do
    {
        printf("height: ");
        scanf("%d", &h);
    } while ({h < 1 || h > 8});
    
}