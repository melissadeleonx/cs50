// Implements Linked Listing using nodes in the code instead of malloc since it is more efficient
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(int argc, char *argv[])
{
   if (argc < 2)
   {
     printf("Usage: /listefficient NUMBERS\n");
     return 1;
   }
   // Memory for numbers
   node *list = NULL;

   // For each command-line argument
    for (int i = 1; i < argc; i++)
    {
          // Convert argument to int
          int number = atoi(argv[i]);

          // Allocate node for number
          node *n = malloc(sizeof(node));
          if (n == NULL)
          {
            return 1;
          }
          n->number = number;
          n->next = NULL;

          // Prepend node to list
          n->next = list;
          list = n;
     }

     node *ptr;

     // Print numbers, use for loops instead of wile
    for (ptr = list; ptr != NULL; ptr = ptr->next)
    {
        printf("%i\n", ptr->number);
    }

    // Free memory
    ptr = list;
    while (ptr != NULL)
    {
        node *next = ptr->next;
        free(ptr);
        ptr = next;
    }
}