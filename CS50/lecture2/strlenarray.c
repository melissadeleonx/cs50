#include <stdio.h>
#include <cs50.h>
#include <string.h>

// Always start with pseudocode so you won't make a mistake, solve one at a time
int main(void)
{
    // We need 3 names in th same variable. Printf to check!
    string name[3];
    for (int i = 0; i < 3; i++)
    {
        name[i] = get_string("Name: ");
    }

    int n = strlen(name[3]);
    for (int i = 0; i < strlen(name[i]); i++)
    {
        printf("%i is the lenght %s\n", strlen(name[0]), name[0]);
    }


}