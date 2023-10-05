// Design and implement a program, substitution, that encrypts messages using a substitution cipher.
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// The program must accept a single command-line argument, the key to use for the substitution.
int main(int argc, string argv[])
{
    // Key is case-insensitive and should contain 26 letters.
    // Error message if no command-line arguments or with more than one and if key does not meet requirements
    


    // If everything is valid, prompt the user to enter an input
    string plaintext = get_string("Plaintext: ");

    printf("Ciphertext: %s\n", plaintext);
    return 0;
}