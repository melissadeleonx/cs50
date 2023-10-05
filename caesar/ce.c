// Design and implement a program, caesar, that encrypts messages using Caesar’s cipher.
// Make sure program was run with just one command-line argument
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// Make a function to check that the input has only digits
bool only_digits (string input);

int main(int argc, string argv[])
{
    // Rules: If there is no input and user puts letters or symbols, print an error message
    if (argc != 2 || !only_digits(argv[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Convert the string to int using stdlib.h
    int key = atoi(argv[1]);
    string plaintext = get_string("Plaintext: ");

    // Convert plaintext to ciphertext and print the result
    // Rules: Use the formula (ciphertext[i] = (plaintext[i] - initial + key) % 26 + initial)
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        if (isalpha(plainttext[i]))
        {
            char initial;
            if (isupper(plainttext[i]))
            {
                initial = 'A'
            }
            else
            {
                initial = 'a'
            }
        }
    }
}



bool only_digits (string input)
{
    for (int i = 0; i < strlen(input); i++)
    {
        if (!isdigit(input[i]))
        {
            return false;
        }
    }
    return true;
}
