#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // get_string to as for a return value. What is string? sets of characters, letters
    // = is not an equal sign but an assign sign, it gives an assignment
    string answer = get_string("What is your name? ");

    printf("Hello %s\n", answer);

    // the string depends on how the programmer wants it to implement
    // \n is for the next line or create a new line - please note that compiler tools are not user-friendly, you need to work around it to avoid errors!!
    // what is the % for? it is to identify the data types, an identifier
    // stdio.h and cs50.h libraries have the functions
}