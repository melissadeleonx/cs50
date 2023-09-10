#include <stdio.h>
#include <cs50.h>

// Goal is to recreate a right-aligned pyramid

int main(void) {
    int height, rows, columns;

    do { height = get_int("Height: ");
    if(height < 1 || height > 8)
    {
        printf("Enter a number from 1 to 8\n");
    }
    } while(height < 1 || height > 8);

    for(rows = 0; rows < height; rows++)
    {
        for(columns = 0; columns < rows; columns++)
        {
            printf(" ");
        }
        for(columns = 0; columns < rows - 1; columns++)
        {
            printf("#");
        }
    printf("\n");
    } return 0;
}