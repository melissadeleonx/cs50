#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int size;
    do
    {
        size = get_int("Size: ");
    }
    while (size < 0);
}