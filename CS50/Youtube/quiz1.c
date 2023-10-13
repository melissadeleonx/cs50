// Question: Which of these is true before main returns?
// My answer: D. tmp equals a
// Reason: The function definition void swap goes before main.
#include <stdio.h>
#include <cs50.h>

void swap(int a, int b);

int main(void)
{
    int x = 1;
    int y = 2;
    (swap(x, y));

}

void swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}