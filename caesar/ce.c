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
    string password = get_string("Plaintext: ");

    // Convert plaintext to ciphertext and print the result
    // Rules: Use the formula 
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
