#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int point = get_int("How many points did you lose? ");
    if (point < 2)
    {
        printf("You lost fewer points than me.\n");
    }
    else if (point > 2)
    {
        printf("You lost more points than me.\n");
    }
    else (point = 2)
    {
        printf("We are tie!\n");
    }
}