#include <stdio.h>

int main(void)
{
    int n, count_odd = 0, count_even = 0;
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
        if (arr[i] % 2 != 0)
        {
            count_odd++;
        }
        else
        {
            count_even++;
        }
    }

    printf("even count = %i\nodd count = %i", count_even, count_odd);
}