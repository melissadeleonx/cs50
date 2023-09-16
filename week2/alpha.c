#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    string word;
    int word_length = strlen(word);
    word = get_string("Word: ");

    for(int i = 0; i < word_length -1; i++)
        {
            printf("Yes\n");
        }
    do
    {
          printf("No, try again!\n");
          }while(word[i] > word[i + 1]);
}