#include <stdio.h>

void meow(int n); // You can put void on the function so it won't have any input or you can put something inside the () which can customize its definition


int main(void)
{
    // Since we function meow is no longer define as void, we can remove the LOOP for which makes it meow a few times
    // I think we need to define the int n???
        {
            int n = 3;
            meow(3);
    }
}









// As long as you declare the function at the top before the main, the program will identity the functions, it reads from top to bottom
// Define the function like below
// Other languages allow functions in any order but not in C, it is cooler more complicated language so FOLLOW THE ORDER!!!
void meow(int n)
{
    for (int i = 0; i < 3; i++)
    {
        printf("meow\n");
    }
}
