#include <cs50.h>
#include <stdio.h>
#include <ctype.h>

// Readability Test
// New functions to calculate number of letters in the text
int count_letters(string text);

// Coleman-Liau index computation is index = 0.0588 * L - 0.296 * S - 15.8

int main(void)
{
    // Start the readability program
    string text = get_string("Text: ");
    printf("Text Number is %i\n", count_letters);

    return 0;
}

int count_letters(string text);
{
    int letters = 0;
    for(int i = 0; i < text[i]; i++)
    {
         if (isalpha(text[i]))
         {
            letters++;
         }

    }
}