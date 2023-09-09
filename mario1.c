#include <stdio.h>

int main(void) {
    int height = 8;

    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= i; j++) {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}