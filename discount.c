#include <stdio.h>

int main()
{
    float original_price, disc_perc;

    printf("enter original price: ");
    scanf("%f", &original_price);

    printf("enter discount(%%): ");
    scanf("%f", &disc_perc);

    float discount = original_price * (disc_perc/100);
    float final_price = original_price - discount;

    printf("\ndiscount amount = %.2f\nfinal price = %.2f", discount, final_price);

    return 0;
}