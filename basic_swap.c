#include <stdio.h>

void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int x, y;
    printf("enter 2 numbers: ");
    scanf("%d %d", &x, &y);

    swap(&x, &y);
    printf("after swapping: %d, %d", x, y);
    return 0;
}