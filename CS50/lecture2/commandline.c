#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Goal is to set simple programs with commandline arguments - Users are able to put input when they run the program
// Commandline arguments are the basics of programming and getting input from users from the main code
// Let's play around one more
// Any questions? SO MUCH!!
// If you put numbers after your program file, they will considered as string(text, chars as in ASCII)
// Please note that nowadays, programmers use Unicode more than ASCII because of its limitations
int main(int argc, string argv[])
{
    if (argc > 0) // The conditionals should be cohesive with what you want to implement, otherwise it will result to the other conditionals you want to implement
    {
    printf("Hello %s %s\n", argv[1], argv[2]);
    }
    else
    {
        printf("Hello World!\n");
    }
}