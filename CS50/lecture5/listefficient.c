// Implements Linked Listing using nodes in the code instead of malloc since it is more efficient
#include <stdio.h>
#include <stdlib.h>

typdef struct node
{
    int number;
    struct node *next;
}
node;

int main(int argc, char *argv[])
{
   // Memory for numbers
   node *list = NULL;

   // For each command-line argument
    for (int i = 1; i < argc; i++)

}