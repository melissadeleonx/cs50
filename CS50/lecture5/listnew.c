// Implements a list of numbers with a pointer

int main(void)
{
   int *list = malloc(3 * sizeof(int));

    // Print list
    for (int i = 0; i < 3; i++)
    {
        printf("%i\n", list[i]);
    }
}