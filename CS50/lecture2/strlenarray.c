#include <stdio.h>
#include <cs50.h>
#include <string.h>

// Always start with pseudocode so you won't make a mistake, solve one at a time
// Goal is to get 3 names and printing the name with the strlen integer

int main(void)
{
    string name[3];
    for (int i = 0; i < 3; i++)
    {
        name[i] = get_string("Name: ");
    }
        printf("You've entered: ");

}
