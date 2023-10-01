#include <stdio.h>

// Debugging Exercises - I corrected the bug manually but let's see what other procedure can we follow by putting < 3 and separating # from \n
// Use printf to detect the bug, it is pretty cool to see the i(counter times)
// How debugger works, you can use for now debug50 - compile first before debugging and make sure to put a breakpoint on the line you want to debug
// What is the alternative for debug50??

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        printf("#\n");
    }
}