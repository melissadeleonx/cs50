#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

// Mention new function on the top
const int N = 2;
int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word[N];
    word[0] = get_string("Player 1: ");
    word[1] = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word[0]);
    int score2 = compute_score(word[1]);

    // TODO: Print the winner
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }

    return 0;
}

int compute_score(string word)
{
    // TODO: Compute and return score for string
    int sum = 0;
    int word_length = strlen(word);

    for (int i = 0; i < word_length; i++)
    {
        // Conditions about upper and lowercase eg. A = a, numbers and symbols = 0
        char letter = word[i];
        if (isupper(letter) || islower(letter))
        {
            int index = toupper(letter) - 'A';
            sum += POINTS[index];
        }
        else
        {
            word[i] = 0;
            break;
        }
    }
    return sum;
}
