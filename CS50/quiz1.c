#include <stdio.h>
#include <cs50.h>

void swap(int a, int b);

int main(void)
{
    int x = 1;
    int y = 2;

    if (swap(x, y))
    {
        printf("%i\n", y);
    }

}

void swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}