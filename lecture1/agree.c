#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user to agree, if only a single letter, use char or char datatype
    char answer = get_char("Do you agree? ");

    // Check whether user agreed then we make a conditionals if they typer lower or uppercase, || this sign means or, we cannot use & for indicating both as user needs to only input 1 character and not both
    // Notice we use one quote here ' ' which it is for char, if it is string(multiple characters), it should be "", int does not need one
    // Program won't work with yes or no, but let's try it a bit( we tried doing with get_string but it needs further functions which are available in another library called string.h)
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