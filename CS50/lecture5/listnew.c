// Implements a list of numbers with a pointer

int main(void)
{
   // Array is a chunk of contiguous memory while malloc gives any old chunk of contiguous memory
   int *list = malloc(3 * sizeof(int));
   if (list == NULL)
   {
        return 1;
   }

    // Initialize list with numbers, you can use arrays [0][1]. . . or deference list *list but its too cryptic
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // Print list
    for (int i = 0; i < 3; i++)
    {
        printf("%i\n", list[i]);
    }
}