#include <cs50.h>
#include <stdio.h>

const int N = 5;
int main (void)
{
    int length;
    do
    {
        length = get_int("Lenght: ");
    }
    while(length < 0);

    int twice[length];
    for(int i = 0; i < length; i++)
   {
    twice[i] = (twice[i] - 1) * 2;

    printf("%i\n", twice);}
   }
