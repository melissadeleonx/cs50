#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user to agree, if only a single letter, use char or char datatype
    char answer = get_char("Do you agree? ");
    
    // Check whether user agreed then we make a conditionals if they typer lower or uppercase, || this sign means or, we cannot use & for indicating both as user needs to only input 1 character and not both
    if (answer == 'y' || answer == 'Y')
    {
        printf("Agreed.\n");
    }
    else if (answer == 'n' || answer == 'N')
    {
        printf("Not agreed.\n");
    }
    else
    {
        printf("Please answer Y for yes or N for no.\n");
    }
}