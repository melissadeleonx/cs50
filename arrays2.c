#include <cs50.h>
#include <stdio.h>

const int N = 5;
int main (void)
{
    int size[N];
    int size[0] = size;
    for (int i = 1; i < 5; i++) {
        numbers[i] = numbers[i - 1] * 2;
    }

    do
    {
        size[N] = get_int("size: ");
    }
    while(size[N] < 0);

    for(int i = 1; i < N; i ++)
    {
        printf("%i\n", size[N]*2);
        }
}