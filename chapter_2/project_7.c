/* Program that asks user to input a USD amount and displays how to pay that amount using the smallest number of 20, 10, 5, 1 bills */

#include <stdio.h>

int main(void)
{
    int amount;
    printf("Enter a USD amount: ");
    scanf("%i", &amount);

    int twenty = amount / 20;
    int ten = (amount - (twenty * 20)) / 10;
    int five = (amount - (twenty * 20) - (ten * 10)) / 5;
    int one = (amount - (twenty * 20) - (ten * 10) - (five * 5)) / 1;

    printf("$20 bills: %i\n$10 bills: %i\n$5 bills: %i\n$1 bills: %i\n", twenty, ten, five, one);

}