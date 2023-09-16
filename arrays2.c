#include <cs50.h>
#include <stdio.h>

const int N = 5;
int main (void)
{
    int size[N];

    for(int i = 0; i < N; i++)
    {
        size[i] = get_int("size: ");
        }
        printf("%i\n", size[N]);
}