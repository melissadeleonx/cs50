#include <cs50.h>
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c = get_char("Do you agree? ");

    // Convert the response to lowercase
    c = tolower(c);

    if (c == 'y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n')
    {
        printf("Not agreed.\n");
    }
    else
    {
        printf("Invalid response.\n");
    }
}