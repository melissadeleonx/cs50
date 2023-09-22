#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);
void converttobinary(string text);

int main(void)
{
    string text = get_string("Enter your message here:  ");
    for (int i = 0; i < strlen(text); i++)
// bit should be equivalent to the convert binary solution
{
    bit = converttobinary(text);
    printf("%i\n", bit);
}
return 0;
    }


// Only issue now is to convert ASCII to Binary??



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

void converttobinary(string text)
{
    n >= 0;
    text[i] = n % 2;
    n = n / 2;
    i++
}