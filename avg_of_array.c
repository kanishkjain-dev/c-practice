#include <stdio.h>

int main(void)
{
    int sum = 0;
    int n;
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
        sum += arr[i];
    }

    int avg = sum/n;

    printf("average = %i", avg);
}