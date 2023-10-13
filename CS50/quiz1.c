#include <stdio.h>
#include <cs50.h>

bool swap(int a, int b);

int main(void)
{
    int x = 1;
    int y = 2;

    if (swap(x, y))
    {
        printf("%i\n", y);
    }

}

bool swap(int a, int b)
{
    if (int tmp = a)
    {
        a = b;
        b = tmp;
        return true;
    }
return false;
}