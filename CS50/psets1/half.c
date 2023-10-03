// Calculate your half of a restaurant bill
// Data types, operations, type casting, return value

#include <cs50.h>
#include <stdio.h>

float half(float bill, float tax, int tip);

int main(void)
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
    int tip_percent = get_int("Tip percent: ");
    float half_share = half(bill_amount, tax_percent, tip_percent);

    printf("You will owe %f each!\n", half_share);
}

// TODO: Complete the function
float half(float bill, float tax, int tip)
{
    bill = ((bill + (bill * tax / 100.0)) + (bill * tip / 100.0)) / 2;
    return bill;
}
