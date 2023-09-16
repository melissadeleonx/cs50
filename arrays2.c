#include <cs50.h>
#include <stdio.h>

const int N = 5;
int main (void)
{
    int size[N];

    for(int i = 0; i < N; i ++)
    {
        size[N] = get_int("size: ");
        printf("%i\n", size[N]);
        }
    do
    {
        size[N] = get_int("size: ");
    }
    while(size < 0);
    }


