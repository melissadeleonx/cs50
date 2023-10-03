#include <cs50.h>
#include <stdio.h>

// SIMPLER CODES are the BETTER CODES
// Remember that a new function should have a parameter that will not affect the variables of main
// Do not complicate life! Please see the example below:

float discount(float regular, int percent_off);

int main(void)
{
    float regular = get_float("Regular Price: ");
    int percentage = get_int("Percent Off: ");
    float sale = discount(regular, percentage);
    printf("The Sale Price is $%.2f\n", sale);
}

float discount(float regular, int percent_off)
{
    regular = regular - (regular * percent_off / 100.0);
    return regular;
}

