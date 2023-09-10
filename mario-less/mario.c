#include <stdio.h>
#include <cs50.h>

// Goal is to recreate a right-aligned pyramid

int main(void) {
    int height, rows, columns;

    do { height = get_int("Height: ");
    if(height < 1 || height > 8)
    {
        printf("Enter a height from 1 to 8");
    }
    } while(height < 1 || height > 8);
}
