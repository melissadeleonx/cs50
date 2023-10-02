#include <stdio.h>
#include <cs50.h>
#include <string.h> // string.h library has the strlen function that counts the number of char in string, automatically excluding '\0' nul

// Learn about strlen and try to manipulate more examples
int main(void)
{
    string name1 = get_string("What is your name? ");
    string name2 = get_string("Name: ");

    int n = strlen(name1);
    int a = strlen(name2);
    printf("%i is for name1 while %i is for name2\n", n, a);

}