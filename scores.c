#include <stdio.h>

float average(int length, int numbers[]);

int main(void)
{
    const int n = 3;

    int scores[n];

    for (int i = 0; i < n; i++)
    {
        printf("scores: ");
        scanf("%i", &scores[i]);
    }
    printf("average: %.2f", average(n, scores));
}

float average(int length, int numbers[])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += numbers[i];
    }
    return sum / (float) length;
}