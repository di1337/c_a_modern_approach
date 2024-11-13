/* Modify project_2 for the user to input the radius */

#include <stdio.h>
#define PI 3.14

int main(void)
{
    int radius;
    printf("Input the radius: ");
    scanf("%d", &radius);
    float formula = (4.0f / 3.0f) * PI * (radius * radius * radius);

    printf("The volume of the sphere with radius %d is: %f\n", radius, formula);

    return 0;

}