#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

// Design and implement a program, caesar, that encrypts messages using Caesar’s cipher.
// Make sure program was run with just one command-line argument
int main(int argc, string argv[])
{
    // Make sure every character in argv[1] is a digit, a non-negative integer.

    // Convert argv[1] from a `string` to an `int`

    // Prompt user for plaintext
    string plaintext = get_string("plaintext: ");
    for (int i = 0; i <= strlen(plaintext); i++)
    {
        int key = atoi(argv[1]);
        

        printf("ciphertext: %s", plaintext);

    }



    // For each character in the plaintext:

        // Rotate the character if it's a letter
}

