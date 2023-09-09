#include <cs50.h>
#include <stdio.h>

// Function to calculate the total amount with tax
float calculateTotalWithTax(float billAmount, float taxRate)
{
    return billAmount + (taxRate / 100) * billAmount;
}

// Function to calculate the tip amount
float calculateTip(float totalAmount, float tipPercent)
{
    return (tipPercent / 100) * totalAmount;
}

int main(void)
{
    float billAmount = get_float("Bill before tax and tip: ");
    float taxRate = get_float("Sales Tax Percent: ");
    float totalAmount = calculateTotalWithTax(billAmount, taxRate);

    float tipPercent = get_float("Tip percent: ");
    float tipAmount = calculateTip(totalAmount, tipPercent);

    int people = get_int("How many are you: ");
    float perPersonAmount = (totalAmount + tipAmount) / people;

    printf("Each person will owe $%.2f\n", perPersonAmount);

    return 0;
}
