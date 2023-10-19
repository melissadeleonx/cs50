// Implements a list of numbers with a pointer

int main(void)
{
   // Array 
   int *list = malloc(3 * sizeof(int));

     // Initialize list with numbers
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // Print list
    for (int i = 0; i < 3; i++)
    {
        printf("%i\n", list[i]);
    }
}