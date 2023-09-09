#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
    int tip_percent = get_int("Tip percent: ");
    int people = get_int("How many are you: ");

    float my_half = ((bill_amount + tax_percent + tip_percent)/people);

    printf("You will owe $%.2f each!\n", my_half);

    return 0;
}
