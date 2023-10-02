#include <stdio.h>
#include <cs50.h>
#include <string.h>

// Always start with pseudocode so you won't make a mistake, solve one at a time
int main(void)
{
    // We need 3 names in th same variable. Printf to check!
int main(void)
{
    string name[3];
    for (int i = 0; i < 3; i++)
    {
        name[i] = get_string("Name: ");
    }
        printf("You've entered: ");
        int i = 0;
        while (i < 3)
        {
            printf(" %s", strlen(name[i]));
            i++;
        }
        printf("\n"); // Put the next line outside the loop so it won't repeat itself
}


}