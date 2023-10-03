#include <cs50.h>
#include <math.h>
#include <stdio.h>

// Calculate your half of a restaurant bill

float half(float bill, float tax, int tip);

// Data types, operations, type casting, return value
// Step 1: Make a pseudocode.
int main(void)
{
    // Prompt user to enter the bill amount before tax and tip
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
    int tip_percent = get_int("Tip percent: ");

    float bill_tax = bill + (tax/bill);
    float half = (bill_tax + (tip/bill_tax)) / 2;

    printf("You will owe %.2f each!\n", half);
}
    return 0;
}
