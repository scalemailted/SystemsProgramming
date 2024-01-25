#include <stdio.h>

int main() {
    int i;

    // Loop demonstrating 'break'
    printf("Loop demonstrating 'break':\n");
    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            printf("Number 5 is reached, breaking loop...\n");
            break; // Exit the loop when i is 5
        }
        printf("%d ", i); // Print the number
    }
    printf("End Loop.\n");
    printf("\n");

    // Loop demonstrating 'continue'
    printf("Loop demonstrating 'continue':\n");
    for (i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue; // Skip the rest of the loop for even numbers
        }
        printf("%d ", i); // Print the number if it's odd
    }
    printf("\nEnd Loop.\n");
    printf("\n");

    return 0;
}
