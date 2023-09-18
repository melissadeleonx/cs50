#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string text = get_string("Text: ");
    int letters = 0;
    for (int i = 0; text[i]; i++) {
        if (isalpha(text[i]))
        {
            letters++;
        }
    }
    return letters;
}