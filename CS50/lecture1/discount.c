#include <cs50.h>
#include <stdio.h>

// Use clear to clear terminal
// Now, let's try to make other functions with data types

int main(void)
{
    // Prompt user to input regular price using the data type float for numbers with decimals
    float regular = get_float("Regular Price: ");

    float sale = regular * .85;

    // Print the discount price, usually in the US it is with 2 decimals so use .2f%
    printf("Sale Price is $%.2f\n", sale);
}