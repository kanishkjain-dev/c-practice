#include <stdio.h>

int main(void)
{
    int n, max = 0;
    printf("enter num of elements: ");
    scanf("%i", &n);

    int arr[n];
    printf("enter elements: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("largest element: %i", max);

    return 0;
}