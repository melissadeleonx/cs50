#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string text = get_string("Text: ");
    long length = strlen(text);
    for (int i = 0; i < text[i]; i++) {
        if (isalpha(text[i]))
        {
            text[i]++;
        }
        printf("%li\n", strlen(text));
    }
}