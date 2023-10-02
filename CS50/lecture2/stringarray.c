#include <stdio.h>
#include <cs50.h>

// Goal is to make an array of string, similar to the array int on score.c
// First version is a copied code online for study reference, check on the terminal and try to remember the rules
// My second version after taking a glimpse of the code online, let's go! Okay, I used the for loop which loops both get_string and printf_  but that is not my intention, I want to have only one sentence at the end.
// Third version

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
            printf(" %s", name[i]);
            i++;
        }
        printf("\n");
}