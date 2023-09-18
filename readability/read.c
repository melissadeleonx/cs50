#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
   string text = get_string("Text: ");
      int sentences = 0;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if(ispunct(text[i]))
        {
            sentences++;
        }
    } printf("Total sentences is %i\n", sentences);
    return 0;
}

