#include <stdio.h>

int main(void)
{
    int n;

    printf("enter num of elements: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];

    printf("enter elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }

    printf("original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\ncopied array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}