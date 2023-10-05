// Convert a single command-line argument with no-vowel string
#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main(int argc, string argv[1])
{
    // If command-line argument is empty, print an Error Message
    if (argc != 2)
    {
        printf("Error, please input a command-line argument.\n");
        return 1;
    }

    // Print the string with no vowels. Implement the new function that replace vowels with numbers.
    printf("%s\n", argv[1]);
}








