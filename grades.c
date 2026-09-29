#include <stdio.h>

int main()
{
    int marks;

    printf("enter ur total marks obtained(out of 500): ");
    scanf("%i", &marks);

    if (marks < 0 || marks > 500)
    {
        printf("invalid marks");
    }
    else
    {
        switch (marks/50)
        {
            case 10:
            case 9:
            printf("grade A");
            break;

            case 8:
            printf("grade B");
            break;

            case 7:
            printf("grade C");
            break;

            case 6:
            printf("grade D");
            break;

            case 5:
            printf("grade E");
            break;

            default:
            printf("grade F, Failed");
        }

    }
    return 0;
}