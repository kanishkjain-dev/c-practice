#include <stdio.h>

int main(void)
{
    int n1, n2;

    printf("enter size of 1st array: ");
    scanf("%d", &n1);

    int arr1[n1];

    printf("enter 1st array elements: ");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("enter size of 2nd array: ");
    scanf("%d", &n2);

    int arr2[n2];
    int merged[n1 + n2];

    printf("enter 2nd array elements: ");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < n1; i++)
    {
        merged[i] = arr1[i];
    }

    for (int i = 0; i < n2; i++)
    {
        merged[n1 + i] = arr2[i];
    }

    printf("merged array: ");
    for (int i = 0; i < n1 + n2; i++)
    {
        printf("%d ", merged[i]);
    }

    return 0;
}