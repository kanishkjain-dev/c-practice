#include <stdio.h>

int main()
{
    int a[2][2], b[2][2], sum[2][2];

    printf("enter 1st matrix:\n");

    for(int i=0; i<2; i++)
        for(int j=0; j<2; j++)
            scanf("%d", &a[i][j]);

    printf("enter 2nd matrix:\n");
    
    for(int i=0; i<2; i++)
        for(int j=0; j<2; j++)
            scanf("%d", &b[i][j]);

    printf("sum of matrices:\n");

    for(int i=0; i<2; i++) 
    {
        for(int j=0; j<2; j++) 
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}