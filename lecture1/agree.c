#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user to agree, if only a single letter, use char or char datatype
    char answer = get_char("Do you agree? ");
    // Check whether user agreed
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