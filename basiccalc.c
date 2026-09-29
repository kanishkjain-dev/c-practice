#include <stdio.h>

int main()
{
    int a, b;
    char opera;

    printf("enter 2 numbers: ");
    scanf("%i%i", &a, &b);

    printf("enter an operator(+, -, *, /): ");
    scanf(" %c", &opera);

    switch (opera)
    {
        case '+':
        printf("addition = %i", a + b);
        break;

        case '-':
        printf("subtraction = %i", a - b);
        break;

        case '*':
        printf("multiplication = %i", a * b);
        break;

        case '/':
        if (b == 0)
        {
            printf("cannot divide by 0");
            break;
        }
        else
        {
            printf("division = %.2f", (float)a / b);
            break;
        }
        
        default:
        printf("invalid operator");
    }

    return 0;

}