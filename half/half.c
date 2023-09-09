#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
          tax_percent = ((%.f/ 100) * bill_amount);
    float bill_amount_with_tax = (bill_amount + tax_amount);
    int tip_percent = get_int("Tip percent: ");
    float tip_amount = ((tip_percent / 100) * bill_amount_with_tax);
    int people = get_int("How many are you: ");

    float my_half = ((bill_amount + tax_amount + tip_amount) / people);

    printf("You will owe $%.2f each!\n", my_half);

    return 0;
}
