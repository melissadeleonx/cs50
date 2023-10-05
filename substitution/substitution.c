// Design and implement a program, substitution, that encrypts messages using a substitution cipher.
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to check that the input has only alphabet letters
bool only_alpha(string input);

// The program must accept a single command-line argument, the key to use for the substitution.
int main(int argc, string argv[])
{
    // Key is case-insensitive and should contain 26 letters.
    // Error message if no command-line arguments or with more than one and if key does not meet requirements
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    } else if (!only_alpha(argv[1]))
    {
        printf("Key must contain 26 letters.\n");
        return 1;
    } else if (strlen(argv[1]) < 26)
    {
        printf("Key must contain 26 letters.\n");
        return 1;
    }

    // If everything is valid, prompt the user to enter an input
    string plaintext = get_string("Plaintext: ");

    printf("Ciphertext: %s\n", plaintext);
    return 0;
}

// Definition of the only alphabet function
bool only_alpha(string input)
{
    for (int i = 0; i < strlen(input); i++)
    {
        if (!isalpha(input[i]))
        {
            return false;
        }
    }
    return true;
}