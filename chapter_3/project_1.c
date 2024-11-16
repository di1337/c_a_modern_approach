/* Program that accepts a date from the user in the format mm/dd/yyyy and outputs it as yyyymmdd */

#include <stdio.h>

int main(void)
{
    int day, month, year;
    printf("Enter your date in the format mm/dd/yyyy: ");
    scanf("%02d/%02d/%d", &month, &day, &year);

    printf("%d%02d%02d", year, month, day);

    return 0;


}