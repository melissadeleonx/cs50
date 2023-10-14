// & operator provides the address of something stored in memory. Instructs the compiler to go to a location in memory.
// * pointer is a variable that contains the address of some value. Most succinctly, a pointer is an address in your computer’s memory.
#include <stdio.h>

int main(void)
{
    int n = 50;
    printf("%p\n", &n);
}