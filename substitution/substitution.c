// Design and implement a program, substitution, that encrypts messages using a substitution cipher.
#include <cs50.h>
#include <stdio.h>

// The program must accept a single command-line argument, the key to use for the substitution.
int main(int argc, string argv[])
{
    // The key itself should be case-insensitive, so whether any character in the key is uppercase or lowercase should not affect the behavior of your program.

    // Rules and error messages.
    // If your program is executed without any command-line arguments or with more than one command-line argument
    // If the key is invalid (as by not containing 26 characters, containing any character that is not an alphabetic character, or not containing each letter exactly once)

    // If everything is valid, prompt the user to enter an input
    string plaintext = get_string("Plaintext: ");
}