#include <stdio.h>

int main(void)
{
    int n, min;
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
        min = arr[i];
        if (arr[i] > min)
        {
            min = arr[i];
        }
    }

    printf("smallest element: %i", min);

    return 0;
}