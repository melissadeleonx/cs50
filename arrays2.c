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

    for(int i = 0; i < N; i ++)
    {
        printf("%i\n", size[N] * 2);
        }
}