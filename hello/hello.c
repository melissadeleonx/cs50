#include <stdio.h>
#include <cs50.h>
int main(void)
{
    string name = get_string("What's your name? ");
    string location = get_string("Where are you from? ");
    printf("hello, %s from %s!\n", name, location);

    return 0;
}