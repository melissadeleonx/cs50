// Design and implement a program, substitution, that encrypts messages using a substitution cipher.
#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Function to check if the key input has only alphabet letters
bool only_alpha(string input);

// Function to check if the key input has one letter for each letters of the alphabet. No duplicate letters.
bool one_letter(string key);



// Function to replace from key letters to ciphertext
string substitute(string input, string key);

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
    string ciphertext = substitute(plaintext, argv[1]);

    // Convert the plaintext to ciphertext by substituting letters with the key characters

    printf("Ciphertext: %s\n", ciphertext);
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

// Definition of the one-letter function where each letter is to appear only once
bool one_letter(string input)
{
    for (int i = 0; i < strlen(input); i++)
    {

    }

}

// Function to implement the letter substitution
string substitute(string input, string key)
{
    for (int i = 0; i < strlen(input); i++)
    {


    }
    return input;
}
