#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

int binary;
void print_bulb(int bit);

int main(void)
{
    string text = get_string("Enter your message here:  ");
    int bit = binary;
    for (int i = 0; i < strlen(text); i++)
    {
        for (int j = BITS_IN_BYTE; j < text[i]; j++)
        {
            printf("%i", bit);
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

int binary(string text)
{
    int bit = text[i];
    for (int j = BITS_IN_BYTE; j < bit; j++)
    {
        j++;
    }
} return 0;