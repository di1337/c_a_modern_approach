/* Computes the volume of a sphere */

#include <stdio.h>
#define PI 3.14

int main(void)
{
    int radius = 10;
    float formula = (4.0f / 3.0f) * PI * radius * radius * radius;

    printf("The volume of the sphere with radius %d is: %f\n", radius, formula);

    return 0;
}