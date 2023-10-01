#include <cs50.h>
#include <stdio.h>

// Compile with Clang instead of the automated make command
int main(void)
{
    string name = get_string("What's your name?  ");
    printf("Hello %s!\n", name);
}