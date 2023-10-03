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

    // We can also make the code more user-friendly if we add the a get_int for the number of people
    float half_share = half(bill_amount, tax_percent, tip_percent);
    printf("%.2f", half_share);
}

// Complete the function using parameters(they are different from the variable inside the main)
float half(float bill, float tax, int tip)
{
    // Calculate the bill with this formula (bill + tax = billtax; (billtax + tip)/ 2)
    float bill_tax = bill + (bill * tax / 100.0);
    bill = (bill_tax + (bill_tax * tip / 100.0)) / 2;
    return bill;
}
