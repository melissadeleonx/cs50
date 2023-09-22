#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Each characters(letters, numbers or symbols) has 8 bits. For example, 'H' = 72 = 01001000
const int BITS_IN_BYTE = 8;

// Function to print a series of 0s and 1s as a series of yellow and black emoji
void print_bulb(int bit);

int main(void)
{
    // Prompt the user to enter the secret message
    string secret = get_string("Enter your secret message here:  ");

    // Convert letters to decimal numbers
    for (int i = 0; i < strlen(secret); i++)
        {
            // Convert decimals numbers to binary
            char n = secret[i];
            int binary[BITS_IN_BYTE];
            int decimals = n;
            int remainder;

            for (int j = 0; j < BITS_IN_BYTE; j++)
            {
                // The formula to convert from decimal to binary
                remainder = n % 2;
                binary[j] = remainder;
                n /= 2;            }

            // Reversing the remainder from left to right
            for (int k = BITS_IN_BYTE; k >= 0; k--)
            {
                print_bulb(binary[k]);
            }
                printf("\n");
        }
}


// Function Definition to print a series of 0s and 1s as a series of yellow and black emoji
void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}

