#include <stdio.h>
#include <cs50.h>

// Write a pseudocode(int i in this context is the length of the string)
// First version, we use the while loop to get the lenght of the string. I want to try the other types of loops
int main(void)
{
    string name = get_string("Name: ");
    for (int i = 0; name[i] != '\0'; i++)
    {

        printf("%i\n", i);
    }
}