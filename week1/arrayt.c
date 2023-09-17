#include <stdio.h>

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%i", &size);

    int numbers[size];

    printf("Enter %i integers:\n", size);

    for (int i = 0; i < size; i++) {
        scanf("%i", &numbers[i]);
    }

    printf("Integers doubled:\n");
    for (int i = 0; i < size; i++) {
        printf("%i\n", numbers[i] * 2);
    }

    return 0;
}