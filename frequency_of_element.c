#include <stdio.h>

int main(void)
{
    int n, freq = 0;
    int arr[] = {7, 4, 2, 2, 2, 5, 6};

    printf("enter an element: ");
    scanf("%i", &n);

    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == n)
        {
            freq++;
        }
    }

    printf("frequency = %i", freq);

    return 0;
}