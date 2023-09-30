#include <cs50.h>
#include <stdio.h>

int main(void)
{
    const int MINE = 2; // Initializing a variable to use for conditionals so you can change it more easily and design is better
    // Make the name capitalize as good practice for constant variables, as a reminder that somewhere somehow it is a constant. Instilling a heuristic - mental shortcut
    
    int point = get_int("How many points did you lose? ");
    if (point < MINE)
    {
        printf("You lost fewer points than me.\n");
    }
    else if (point > MINE)
    {
        printf("You lost more points than me.\n");
    }
    else
    {
        printf("We are the same!\n");
    }
}