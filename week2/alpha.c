#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    string word;
    int word_length = strlen(word);
    do
    {
        
        for(i = 0; i < word_length -1; i++)
        {
            if(word[i] > word[i + 1])
        {
          printf("No, try again!\n");
        }
        }
    }while(word[i] > word[i + 1]);
}