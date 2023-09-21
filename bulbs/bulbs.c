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
    if (text[i] >= 'A' || text[i] <= 'z')
    {
    printf("%i\n", text[i]);
    }
}
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
