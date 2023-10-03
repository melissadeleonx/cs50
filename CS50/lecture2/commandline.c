#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Goal is to set simple programs with commandline arguments
// Commandline arguments are the basics of programming and getting input from users from the main code
// Let's play around one more
int main(int argc, string argv[])
{
    if (argc == 3)
    {
    printf("Hello %s %s\n", argv[1], argv[2]);
    }
    else
    {
        printf("Hello World!\n");
    }
}