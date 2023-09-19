#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <math.h>

// Function to count the number of letters in a string
int count_letters(string text);

// Function to count the number of words in a string
int count_words(string text);

// Function to count the number of sentences in a string
int count_sentences(string text);

// Implement the Coleman-Liau Index (0.0588 * L - 0.296 * S - 15.8)
float calculate_clindex(int letters, int words, int sentences);

int main(void)
{
    string text = get_string("Text: ");
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    float clindex = calculate_clindex(letters, words, sentences);

    // Grade Level Classification - determine the readability level of the user
    if (clindex < 1)
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
    for (int i = 0, n = strlen(text); i < n; i++)
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
    int words = 0;
    bool in_word = false;

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalpha(text[i]))
        {
            if (!in_word)
            {
                in_word = true;
                words++;
            }
        }
        else
        {
            in_word = false;
        }
    }
    return words;
}

// Function to count the number of sentences
int count_sentences(string text)
{
    int sentences = 0;

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }
    return sentences;
}

// Function to calculate the Coleman-Liau index
float calculate_clindex(int letters, int words, int sentences)
{
    float L = (letters * 100.0) / words;
    float S = (sentences * 100.0) / words;

    return 0.0588 * L - 0.296 * S - 15.8;
}