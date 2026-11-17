#include <stdio.h>

int main(void)
{
    int n;
    int arr[] = {7, 4, 1, 3, 2, 5, 6};

    printf("enter an element: ");
    scanf("%i", &n);

    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == n)
        {
            printf("found it at index: %i", i);
            return 0;
        }
    }

    printf("not found");

    return 0;
}