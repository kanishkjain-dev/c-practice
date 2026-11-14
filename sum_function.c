#include <stdio.h>

int add (int a, int b)
{
    int result = a + b;
    return result;
}

int main(void)
{
    int x, y;
    printf("enter 2 numbers: ");
    scanf("%d %d", &x, &y);

    int sum = add(x, y);

    printf("addition = %i", sum);
    return 0;
}