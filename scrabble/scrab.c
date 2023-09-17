#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

// Mention new function on the top
const int N = 2;
int compute_score(string word[N], int word_length);

int main(void)
{
    // Get input words from both players
    string word[N];
    for(int i = 0; i < N; i++)
    {
        word[0] = get_string("Player 1: ");
        word[1] = get_string("Player 2: ");
        }
    // Score both words

    // TODO: Print the winner

}

