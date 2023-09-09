// Become familiar wih C syntax
// Learn to debug buggy code

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Ask for your name and where live
    char name = get_char("What is your name? ");
    char location = get_char("Where do you live? ");

    // Say hello
    printf("Hello, %c, from %c!", name, location);
    return 0;
    }