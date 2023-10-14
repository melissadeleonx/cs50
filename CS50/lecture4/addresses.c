//  & operator provides the address of something stored in memory. Instructs the compiler to go to a location in memory.
#include <stdio.h>

int main(void)
{
    int n = 50;
    printf("%p\n", &n);
}