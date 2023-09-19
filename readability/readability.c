#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <math.h>

// Week 2 Problem Set: Readability Test
// New functions to calculate number of letters, words and sentences of the text
int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

// Implement the Coleman-Liau Index (0.0588 * L - 0.296 * S - 15.8)
float calculate_clindex(int letters, int words, int sentences);

int main(void)
{
    string text = get_string("Write a text: ");
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    float clindex = calculate_clindex(letters, words, sentences);

    // Grade Level Classification - determine the readability level of the user
    if (clindex > 1)
    {
        printf("Before Grade 1\n");
    }
    else if (clindex >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %.0f\n", clindex);
    }
    return 0;
}

// Function to count the number of letters
int count_letters(string text)
{
    int letters = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
    }
    return letters;
}

// Function to count the number of words
int count_words(string text)
{
    int words = 1;
    for (int i = 0; i < strlen(text); i++)
    {
        if (isspace(text[i]))
        {
            words++;
        }
    } return words;
}

// Function to count the number of words
int count_sentences(string text)
{
    int sentences = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }
    return sentences;
}

// Function to calculate the Coleman-Liau index and classify readability grade level
float calculate_clindex(int letters, int words, int sentences)
{
    // Use the formula with average number of letters per 100 words(L) and the average number of sentences per 100 words(S)
    float L = (letters * 100.0) / words;
    float S = (sentences * 100.0) / words;

    return 0.0588 * L - 0.296 * S - 15.8;

}