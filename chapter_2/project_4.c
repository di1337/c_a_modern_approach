/* Displays dollar/cent amount with 5% tax added */

#include <stdio.h>

int main(void)
{
    float amount;

    printf("Enter dollar amount: ");
    scanf("%f", &amount);

    float tax_added = amount * 1.05;
    printf("With tax added: %.2f", tax_added);

    return 0;

}