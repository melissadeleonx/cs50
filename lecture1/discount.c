#include <cs50.h>
#include <stdio.h>

// Use clear to clear terminal
// Now, let's try to make other functions with data types

int main(void)
{
    // Prompt user to input regular price using the data type float for numbers with decimals
    float regular = get_float("Regular Price: ");

    float sale = regular * .85;
    printf("The discount price is %.1f\n", sale);
}