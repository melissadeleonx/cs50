#include <cs50.h>
#include <stdio.h>
#include <ctype.h>

// Goal is to find out if a credit card is valid using Luhn’s Algorithm
// Make functions to determine if the card provided by the user meet the requirements
// Function for Luhns Algorithm. From string to int.
bool luhnAlgorithm (const char *prompt);

// * Function to determine card type - American Express, MasterCard, or Visa
string cardtype (long cardnumber);

int main(void)
{
    // Conditions: Positive Integers only. No letters. 15 to 16 digits
    // Prompt user to enter the credit card number. Use get_long function
    long number;
    do
    {
        number = get_long("Enter the credit card number: ");
        if ()
    } while (number <= 0);

    // Identify their type(Visa, MasterCard, American Express)


    // Calculate checksum ??????

    // Check for card length and starting digits

    // Print Visa, MasterCard, American Express or INVALID


}



bool LuhnAlgorithm (const char *prompt)
{


}
