#include <stdio.h>

// Debugging Exercises - I corrected the bug manually but let's see what other procedure can we follow by putting < 3 and separating # from \n
// Use printf to detect the bug, it is pretty cool to see the i(counter times)

int main(void)
{
    for (int i = 0; i <= 3; i++)
    {
        printf("i is %i\n", i);
        printf("#\n");
    }
}