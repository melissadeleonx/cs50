#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = get_int("Height: ");
    draw(height);

}


void draw(int n)
{
    // If nothing to draw
    if (n <= 0)
    {
        return;
    }

    
}