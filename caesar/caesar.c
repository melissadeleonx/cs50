#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Design and implement a program, caesar, that encrypts messages using Caesar’s cipher.
// Make sure program was run with just one command-line argument
int main(int argc, string argv[])
{
    int key = atoi(argv[1]);
   if (isdigit(key))
    {
        printf("%i\n", key);
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    string plaintext = get_string("plaintext: ");
    {
        printf("ciphertext: %s", plaintext);
    }



    // For each character in the plaintext:

        // Rotate the character if it's a letter
}

