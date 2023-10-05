// Implement the Leetspeak system or l33tsp36k
// Convert a single command-line argument with no-vowel string
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Make a function that will replace vowels to numbers
// Rules: 'a' 'A' becomes 6, e becomes 3, i becomes 1, o becomes 0 and u does not change

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








