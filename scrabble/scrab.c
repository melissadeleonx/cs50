#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

// Mention new function on the top
int compute_score(string word1, int word_length);

int main(void)
{
    string word = get_string("Word: ");
    int word_length = strlen(word);

    int sum = 0;
    for(int i = 0; i < word_length; i++)
    {
        sum += POINTS[i];
        printf("The score is %i\n", sum);
    }
    return sum;


}
