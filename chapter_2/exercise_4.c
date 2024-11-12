/* Write a program that declares several int and float variable - without initialising them
and then prints the values. Is there any pattern to them? (usually there isnt) 
*/

#include <stdio.h>

int main(void) 
{
    int int1, int2;
    float float1, float2;

    printf("%i, %i, %f, %f", int1, int2, float1, float2);

    return 0;

}

/* output: 0, 0, 0.00000, 534177644544.000000@di1337, the values are indertemined */