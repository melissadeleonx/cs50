#include <stdio.h>
#include <cs50.h>
#include <string.h> // string.h library has the strlen function that counts the number of char in string, automatically excluding '\0' nul

int main(void)
{
    string name = get_string("What is your name? ");

    int n = strlen(name);
    printf("%i\n", n);

}