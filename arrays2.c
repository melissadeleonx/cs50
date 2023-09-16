#include <cs50.h>
#include <stdio.h>

const int N = 5;
int main (void)
{
    int size[N];

    do
    {
        size[N] = get_int("size: ");

        for(int i = 0; i < N; i ++)
    {
        printf("%i\n", size[N]);
        }
    }
    while(size < 0);
}

