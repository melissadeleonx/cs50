#include <cs50.h>
#include <stdio.h>

// Goal is to recreate Super Mario's two adjacent pyramids of blocks
// Try first pyramid
int main(void)
{ int height;
      do { height = get_int("Height: ");
      if(height > 8 || height < 1 )
      {
        printf("Enter a number from 1-8");
      }
      }
      while (height > 8 || height < 1);
    return 0;
}