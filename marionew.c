#include <stdio.h>
#include <cs50.h>

int main(void)
{
   // Get size of grid
    int n = get_size();
    // Print grid of bricks
    printgrid();
}

int get_size(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);
    return n;

}