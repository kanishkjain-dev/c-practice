#include <stdio.h>

int main(void)
{
    long int num;
    int count = 0;

    printf("enter a number: ");
    scanf("%li", &num);

    do
    {
        int digit = num % 10;
        count++;
        num = num / 10;
    }
    while (num > 0);

    printf("length of the number = %i", count);

    return 0;
}