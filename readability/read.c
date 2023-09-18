#include <cs50.h>
#include <stdio.h>
#include <ctype.h>

// Readability Test
// New functions to calculate number of letters in the text

// Coleman-Liau index computation is index = 0.0588 * L - 0.296 * S - 15.8

int main(void)
{
    // Start the readability program
    string text = get_string("Text: ");
    int count_letters = long strlen(text);
    printf("Text Number is %i\n", count_letters);

    return 0;
}
