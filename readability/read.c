#include <cs50.h>
#include <stdio.h>
#include <ctype.h>

// Readability Test
// New functions to calculate number of letters in the text
int count_letters(string text)
int count_words(string text)
int count_sentences(string text)

// Coleman-Liau index computation is index = 0.0588 * L - 0.296 * S - 15.8

int main(void)
{
    // Start the readability program
    string text = get_string("Text: ");
    float cli_score = calculate_cli(text);
    string readability = interpret_cli_score(cli_score);

    printf("CLI Score: %.2f\n", cli_score);
    printf("Readability: %s\n", readability);

    return 0;
}

// Grade Classifications
 (Before Grade 1)
 (Grade 2)
  (Grade 3)
  (Grade 5)
  (Grade 7)
  (Grade 8)
  (Grade 9)
  (Grade 10)
  (Grade 16+)