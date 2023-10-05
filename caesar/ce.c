// Design and implement a program, caesar, that encrypts messages using Caesar’s cipher.
// Make sure program was run with just one command-line argument
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, int argv[1])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    if (isdigit(argv[1]))
    {
        return true;
    }


}