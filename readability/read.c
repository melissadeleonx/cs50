#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
   string text = get_string("Text: ");
   int letters = 0;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
    } printf("Total letters is %i\n", letters);
    return 0;

    int words = 0;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (isspace(text[i]))
        {
            words++;
        }
    } printf("Total words is %i\n", words);
}

