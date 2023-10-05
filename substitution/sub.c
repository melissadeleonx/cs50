#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool only_alpha(string input);

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