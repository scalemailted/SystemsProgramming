#include <stdio.h>

int main() {
    int i;

    // Using a for-loop
    printf("Using for-loop (i=1):\n");
    for (i = 1; i <= 5; i++) {
        printf("%d ", i);
    }

    printf("\n\n");

    // Using a while-loop
    printf("Using while-loop (i=1):\n");
    i = 1; // Resetting i to 1
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }

    printf("\n\n");

    // Using a do-while loop
    printf("Using do-while loop (i=1):\n");
    i = 1; // Resetting i to 1
    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);

    printf("\n\n");

    // Using a do-while loop
    printf("Using do-while loop (i=6):\n");
    i = 6; // Resetting i to 6
    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);

    printf("\n");

    return 0;
}
