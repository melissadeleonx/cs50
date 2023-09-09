#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float a = get_float("Bill before tax and tip: ");
    float b = get_float("Sale Tax Percent: ");
    // get the amount of the %
    float c = ((b / 100) * a);
    // get the bill amount + tax
    float d = (a + c);
    // get the amount of the tip percent
    float e = get_float("Tip percent: ");
    float f = ((e / 100) * d);

    int people = get_int("How many are you: ");
    float my_half = ((d + f) / people);

    printf("You will owe $%.2f each!\n", my_half);

    return 0;
}
