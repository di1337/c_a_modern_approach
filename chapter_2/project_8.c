/* Program that calculates the remaining balance on a loan after the first, second, and third payment.
Given the loan amount, interest rate, and monthly payment */

/* There's a rounding error somewhere because the answers to the parameters given are slighly off 
from what's in the textbook (by 1-5 dollars). I believe it's due to floating point arithmetic and 
rounding errors somewhere. But I'm not sure where yet */

#include <stdio.h>

int main(void)
{
    float loan_amount, interest_rate, monthly_payment;

    printf("Enter the loan amount: ");
    scanf("%f", &loan_amount);
    printf("Enter the interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter the monthly payment: ");
    scanf("%f", &monthly_payment);

    float first_payment, second_payment, third_payment, monthly_interest_rate;
    monthly_interest_rate = interest_rate / 12.0;

    first_payment = (loan_amount - monthly_payment) * ((monthly_interest_rate / 100.0) + 1.0);
    second_payment = (first_payment - monthly_payment) * ((monthly_interest_rate / 100.0) + 1.0);
    third_payment = (second_payment - monthly_payment) * ((monthly_interest_rate / 100.0) + 1.0);

    printf("Balance remaining after first payment: %f\n", first_payment);
    printf("Balance remaining after second payment: %f\n", second_payment);
    printf("Balance remaining after third payment: %f\n", third_payment);
    

    return 0;

}