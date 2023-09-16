#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

// Mention new function on the top
int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

do
    { // Make the conditions 'T' for total hours and 'A' for average hours
        output = toupper(get_char("Enter T for total hours, A for average hours per week: "));

        if (output == 'T')
        {
            int Totalhours = 0;
            for (int i = 0; i < weeks; i++)
            {
                Totalhours += hours[i];
            }
            printf("The Total is %i hours\n", Totalhours);
        }
        else if (output == 'A')
        {
            float Average = calc_hours(hours, weeks);
            printf("The average is %.2f\n", Average);
        }
    }
    while (output != 'T' && output != 'A');
    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
}

int compute_score(string word)
{
    // TODO: Compute and return score for string
    int compute_score = return POINTS[i];
}
