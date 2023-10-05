// Design and implement a program, caesar, that encrypts messages using Caesar’s cipher.
// Make sure program was run with just one command-line argument
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

bool only_digits (string input);

int main(int argc, string argv[1])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

}



bool only_digits (string input)
{
    int key = atoi(input);
    if (isdigit(key))
        {
            return true;
            string plaintext = get_string("plaintext: ");
        }

}
