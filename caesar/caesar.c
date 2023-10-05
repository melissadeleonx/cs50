// Design and implement a program, caesar, that encrypts messages using Caesar’s cipher.
// Make sure program was run with just one command-line argument
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[1])
{
     if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    int key = atoi(argv[1]);
    string plaintext = get_string("plaintext:  ");
    char n = argv[3][0];
    if ( isalpha('n') || isupper('n') || isupper('n'))
{
    printf("ciphertext: %s\n", plaintext);
}
    // For each character in the plaintext:

        // Rotate the character if it's a letter
}

