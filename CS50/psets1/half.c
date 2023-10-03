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
    float half_share = half(bill_amount, tax_percent, tip_percent);

    printf("You will owe %.2f each!\n", half_share);
}

}






float half(float bill, float tax, int tip)
{
   float bill_tax = bill_amount + (tax_percent/100);
   float half = (bill_tax + (tip_percent/100)) / 2;
}