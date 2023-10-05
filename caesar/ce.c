// Design and implement a program, caesar, that encrypts messages using Caesar’s cipher.
// Make sure program was run with just one command-line argument
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// Make a function to check has only digits
bool only_digits (string argv);

int main(int argc, string argv[1])
{
    // Rules: If there is no input and user puts letters or symbols, print an error message
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    int key = atoi(argv[i]);
    if(only_digits(key))
    {
        string password = get_string("Plaintext: ");
    }
    else
    {
        printf("Usage: ./caesar key\n");
    }

    // Convert to ciphertext
}



bool only_digits (string input)
{
    int key = atoi(input);
    if (isdigit(key))
        {
            return true;
        }

    return true;
}
