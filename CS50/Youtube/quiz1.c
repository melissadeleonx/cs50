// Question: Which of these is true before main returns?
// Answer: D. tmp = a;
// Reason: 
#include <stdio.h>
#include <cs50.h>

void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;
    (swap(&x, &y));

    printf("x = %i\ny = %i\n", x, y);

}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}