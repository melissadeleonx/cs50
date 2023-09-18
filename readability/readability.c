#include <cs50.h>
#include <stdio.h>
#include <ctype.h>

// Readability Test
// New functions to calculate number of letters, words and sentences in the text
string text(const char *prompt);
int count_letters(string text); //done
int count_words(string text);   //done
int count_sentences(string text); //done

// Function for Coleman-Liau index, result, and grade level classification
float calculate_colemanliau(string text);
float colemanliau_result;
string grade_level_result(colemanliau_result);

int main(void)
{
    string text = get_string("Text: ");
    float colemanliau_result = calculate_colemanliau(string text);
    string grade_level = grade_level_result(colemanliau_result);

    printf("%f", colemanliau_result);
    printf("%s\n", grade_level);
    return 0;

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
    float calculate_colemanliau(string text)
{
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    // Use the formula with average number of letters per 100 words(L) and the average number of sentences per 100 words(S)
    float L = letters / words * 100;
    float S = sentences / words * 100;

    return 0.0588 * L - 0.296 * S - 15.8;
}

    // Grade Level Classification - determine the readability level of the user


