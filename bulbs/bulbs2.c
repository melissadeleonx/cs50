#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);
int converttobinary(string text);

int main(void)
{
    string text = get_string("Enter your message here:  ");
    int bit = converttobinary(hundreds, tens, ones);
{
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

int converttobinary(string text)
{
    for (int i = 0; i < strlen(text); i++)
    {
         for (BITS_IN_BYTE = 8; BITS_IN_BYTE =< strlen(text); BITS_IN_BYTE++)
         {
            BITS_IN_BYTE++
            }
    }
}