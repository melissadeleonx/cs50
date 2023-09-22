#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;
int hundredths(string text);
int tenths(string text);
int ones(string text);

int numberstobinary(int hundredth, int tenths, int ones, string text);
void print_bulb(int bit);

int main(void)
{
    string text = get_string("Enter your message here:  ");
    for (int i = 0; i < strlen(text); i++)
    {
       printf("%i\n", text[i]);
    }
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

int numberstobinary(int hundredth, int tenths, int ones, string text)
if (string text[i] >= 32 && string text [i] <= 377)
{
    int hundredths = text[i] / 100;
    int tenths = (text[i] % 100) / 10;
    int ones = text[i] % 10;

    int sum = hundredths + tenths + ones;
    return sum;
}