#include <stdio.h>

void meow(void);

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        meow();
    }
}









// As long as you declare the function at the top before the main, the program will identity the functions, it reads from top to bottom
void meow(void)
{
    printf("meow\n");
}
