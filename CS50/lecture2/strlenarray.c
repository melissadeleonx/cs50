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
        // Prompt the user
        name[i] = get_string("Name: ");
    }
        // Print the array of name with the strlen - please note that the return datatype of strlen is lu(undefined long)
        printf("You've entered:\n");
        for (int i = 0; i < 3; i++)
        {
            printf("%s - Lenght: %lu\n", name[i], strlen(name[i]));
        }
        return 0;
}
