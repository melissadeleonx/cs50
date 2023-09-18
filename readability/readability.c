#include <cs50.h>
#include <stdio.h>
#include <ctype.h>

// Readability Test
// New functions to calculate number of letters, words and sentences in the text
string text(const char *prompt);
int count_letters(string text); //done
int count_words(string text);   //done
int count_sentences(string text); //done

// Function for Coleman-Liau index
float calculate_colemanliau;

int main(void)
{





}
























// Function to count the number of letters
int count_letters(string text)
 {
    int letters = 0;
    for(int i = 0; text[i] != '\0'; i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
    } return 0;
}

// Function to count the number of words

int count_words(string text)
{
    int words = 0;
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(isspace(text[i]))
        {
            words++;
        }
    } return 0;
}

// Function to count the number of words
int count_sentences(string text)
{
    int sentences = 0;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if(ispunct(text[i]))
        {
            sentences++;
        }
    } return 0;
}


//Coleman-Liau index computation is 0.0588 * L - 0.296 * S - 15.8
    float calculate_colemanliau
{
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    letters / words * 100;

}
