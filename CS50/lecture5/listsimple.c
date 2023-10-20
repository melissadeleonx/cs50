// REALLOC function
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

   int *list = malloc(3 * sizeof(int));
   if (list == NULL)
   {
        return 1;
   }

    // Initialize list with numbers, you can use arrays [0][1]. . . or deference list *list but its too cryptic
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // After using malloc the first time, you can use realloc after
    int *tmp = realloc(list, 4 * sizeof(int));
    if (tmp == NULL)
   {
        free(list);
        return 1;
   }

   list = tmp;

   list[3] =  4;

    // Print list
    for (int i = 0; i < 3; i++)
    {
        printf("%i\n", list[i]);
    }

    free(list);
    return 0;
}