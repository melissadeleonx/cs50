#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    string text = get_string("Enter your message here:  ");
    for (int i = 0; i < strlen(text); i++)
        {
            char n = text[i];
            int binary(BITS_IN_BYTE);
            int quotient = n;
            int remainder;

            for (int j = 0; j < BITS_IN_BYTE; j++;)
            {
                remainder = n % 2;
                binary[j] = remainder;
                n /= 2;
            }
            for (int k = BITS_IN_BYTE; k >= 0; k--)
            {
                
            }
        }
    printf("\n");
// Only issue now is to convert ASCII to Binary??
}


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

int binary(int decimal)
{
    int decimal = text[i];
    n = 0;
    n = decimal / 2 %;

    return
}