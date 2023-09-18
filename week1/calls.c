#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>

// Function to calculate the number of letters in the text
int count_letters(string text)
{
    int letters = 0;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
    }
    return letters;
}

// Function to calculate the number of words in the text
int count_words(string text)
{
    int words = 0;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (isspace(text[i]))
        {
            words++;
        }
    }
    // Add one to count the last word (there's no space after it)
    return words + 1;
}

// Function to calculate the number of sentences in the text
int count_sentences(string text)
{
    int sentences = 0;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }
    return sentences;
}

// Function to calculate the Coleman-Liau Index
float calculate_cli(string text)
{
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    float L = (float)letters / words * 100;
    float S = (float)sentences / words * 100;

    return 0.0588 * L - 0.296 * S - 15.8;
}

// Function to classify the grade
string interpret_cli_score(float cli_score)
{
    if (cli_score < 1)
    {
        return "Before Grade 1";
    }
    else if (cli_score >= 16)
    {
        return "Grade 16+";
    }
    else
    {
        int grade = round(cli_score);
        switch (grade)
        {
            case 1:
                return "Grade 1";
            case 2:
                return "Grade 2";
            case 3:
                return "Grade 3";
            case 4:
                return "Grade 4";
            case 5:
                return "Grade 5";
            case 6:
                return "Grade 6";
            case 7:
                return "Grade 7";
            case 8:
                return "Grade 8";
            case 9:
                return "Grade 9";
            case 10:
                return "Grade 10";
            case 11:
                return "Grade 11";
            case 12:
                return "Grade 12";
            case 13:
                return "Grade 13";
            case 14:
                return "Grade 14";
            case 15:
                return "Grade 15";
            default:
                return "Grade unknown";
        }
    }
}

int main(void)
{
    string text = get_string("Enter text: ");
    float cli_score = calculate_cli(text);
    string readability = interpret_cli_score(cli_score);

    printf("Readability: %s\n", readability);

    return 0;
}