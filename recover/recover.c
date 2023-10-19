#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Usage: ./recover IMAGE\n");
        return 1;
    }

    // Open memory card
    // Repeat until end of card
    //      Read 512 bytes into a buffer
            // If start of new JPEG
                    // If first JPEG
                        // ...
                        // else ....
                    // Else. . .
                    //      if already found a JPEG
                    // check and recheck

}