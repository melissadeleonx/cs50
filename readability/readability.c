#include <cs50.h>
#include <stdio.h>
#include <ctype.h>

// Readability Test
// New functions to calculate number of letters, words and sentences in the text
string text(const char *prompt);
int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

// Coleman-Liau index computation is index = 0.0588 * L - 0.296 * S - 15.8

int main(void)
{
    //

}

// Function to count the number of letters
int count_letters(string text)
{
    int letters = 0;
    for (int i = 0; text[i]; i++) {
        if (isalpha(text[i]))
        {
            letters++;
        }
    }
    return letters;
}

// Function to count the number of words

{
    int words = 0;
    for (int i = 0; text[i]; i++) {
        if (isalpha(text[i]))
        {
            letters++;
        }
    }
    return letters;
}


