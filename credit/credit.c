#include <cs50.h>
#include <stdio.h>
#include <ctype.h>

// Goal is to find out if a credit card is valid using Luhn’s Algorithm
// Make functions to determine if the card provided by the user meet the requirements
// Function for Luhns Algorithm
// * Function to determine card type - American Express, MasterCard, or Visa
// Conditions: Should all be numeric or contains digit, less than required number length. Use True or False return.

int main(void)
{
    // Prompt user to enter the credit card number. Use get_long function
    do
    {
        long number = get_long("Enter the credit card number: ");
    } while (strlen(number) >= 15)

    // Identify their type(Visa, MasterCard, American Express)


    // Calculate checksum ??????

    // Check for card length and starting digits

    // Print Visa, MasterCard, American Express or INVALID


}


