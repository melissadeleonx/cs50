// Design and implement a program, substitution, that encrypts messages using a substitution cipher.
#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Function to check that the input has only alphabet letters
bool only_alpha(string input);

// Function to replace from key letters to ciphertext
string substitute(string input);

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
    string sub = substitute(plaintext);

    // Convert the plaintext to ciphertext by substituting the key character inputs

    printf("Ciphertext: %s\n", sub);
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

string substitute(string input)
{
    for (int i = 0; i < strlen(input); i++)
    {
        // Use the switch statement.
        switch (input[i])
        {
            case 'a':
                input[i] = input[1][0];
                break;

            case 'b':
                input[i] = input[1][1];
                break;

            case 'c':
                input[i] = input[1][2];
                break;

            case 'd':
                input[i] = input[1][3];
                break;
        }
    }
    return input;
}
