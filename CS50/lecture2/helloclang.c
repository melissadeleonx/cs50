#include <cs50.h>
#include <stdio.h>

// Compile with Clang instead of the automated make command
int main(void)
{
    string name = get_string("What's your name?  ");
    // if you use clang, the terminal will have errors with get_string as undefined, why?

    printf("Hello %s!\n", name);
}