#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>

// Week 2 Problem Set: Readability Test
// New functions to calculate number of letters, words and sentences in the text
int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

// Implement the Coleman-Liau Index (0.0588 * L - 0.296 * S - 15.8)
float calculate_clindex(string text);
int clindex_grade;

int main(void)
{
    string text = get_string("Write a text: ");
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
    } return letters;
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
    } return words;
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
    } return sentences;
}