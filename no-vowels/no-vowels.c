// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch
// Implement the Leetspeak system or l33tsp36k
// Convert a single command-line argument with no-vowel string
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Make a function that will replace vowels to numbers. The program only works for lowercase letters
// Rules: a = 6, e = 3, i = 1, o = 0, u does not change.
// The input parameter for the replace function will be argv[1] and the return value is the converted word.
string replace(string input);

int main(int argc, string argv[])
{
    // If command-line argument is empty, print an Error Message
    if (argc != 2)
    {
        printf("Error message! Please input a command-line argument.\n");
        return 1;
    }

    string leetcode = replace(argv[1]);

    // Print the string with no vowels. Implement the new function that replace vowels with numbers.
    printf("%s\n", leetcode);
}

string replace(string input)
{
    for (int i = 0; i < strlen(input); i++)
    {
        // Use the switch statement.
        switch (input[i])
        {
            case 'a':
                input[i] = '6';
                break;

            case 'e':
                input[i] = '3';
                break;

            case 'i':
                input[i] = '1';
                break;

            case 'o':
                input[i] = '0';
                break;
        }
    }
    return input;
}
