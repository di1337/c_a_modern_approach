/* Modify project_5 to use Horner's rule for calculating the polynomial. It performs fewer multiplications */

#include <stdio.h>

int main(void)
{
    int x;
    
    printf("Enter a value for x: ");
    scanf("%i", &x);

    /* Horner's rule for the specific polynomial: ((((3x+2)x-5)x-1)x+7)x-6 */
    int polynomial = ((((((((((3*x) + 2)*x) - 5)*x) - 1)*x) + 7)*x) - 6);
    printf("The value of the polynomial is: %i\n", polynomial);

    return 0;
}