#include <stdio.h>

int main(void)
{
    int n;
    printf("enter length of array: ");
    scanf("%i", &n);

    int arr[n];
    printf("enter elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &arr[i]);
    }

    printf("before reversing:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%i ", arr[i]);
    }

    for(int i = 0; i < n / 2; i++)
    {
        int tmp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = tmp;
    }

    printf("\nafter reversing:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%i ", arr[i]);
    }

    return 0;
}