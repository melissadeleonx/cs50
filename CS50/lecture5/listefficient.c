// Implements Linked Listing using nodes in the code instead of malloc since it is more efficient
#include <stdio.h>
#include <stdlib.h>

typdef struct node
{
    int number;
    struct node *next;
}
node;

int main(void)
{
   node *list = NULL;
   
}