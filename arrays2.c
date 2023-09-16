#include <cs50.h>
#include <stdio.h>

const int N = 5;
int main (void)
{
    int size[N];
    do
    {
        size[N] = get_int("size: ");
    }
    while(size[N] < 0);

    for(int i = 1; i < N; i ++)
   {
    for(i = 1; i < N; i ++)
        {size[i] = size[i - 1] * 2;
        printf("%i\n", size[N]);}
   }
}