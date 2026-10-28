#include <stdio.h>

void change(int x)
{
    x = 100;
    printf("Inside function: %d\n", x);
}

int main(void)
{
    int a = 10;

    printf("Before function: %d\n", a);

    change(a);

    printf("After function: %d\n", a);

    return 0;
}