#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool only_alpha(string argv[]);

// Function to replace from key letters to ciphertext
string replace(string input);

int main(int argc, string argv[])
{
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
        string plaintext = get_string("Plaintext: ");
        string ciphertext = plaintext;
        for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        if (isalpha(plaintext[i]))
        {
            char initial;
            if (isupper(plaintext[i]))
            {
                initial = 'A';
            }
            else
            {
                initial = 'a';
            }
        }
    }
    printf("Ciphertext: %s\n", plaintext);
    return 0;
}


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


string replace(string argv[1])
{
    for (int i = 0; i < strlen(input); i++)
    {
        // Use the switch statement.
        switch (argv[1][i])
        {
            case 'a':
                argv[1][0] = 'a';
                break;

            case 'b':
                argv[1][1] = 'b';
                break;

            case 'c':
                argv[1][2] = 'c';
                break;

            case 'o':
                argv[1][3] = '0';
                break;
        }
    }
    return input;
}

