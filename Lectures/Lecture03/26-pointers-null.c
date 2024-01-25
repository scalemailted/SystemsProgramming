#include <stdio.h>

int main() {
    // Declare a pointer and initialize it to NULL
    int *ptr = NULL;

    // Print the pointer value
    printf("The value of ptr: %p\n", (void *)ptr);

    // Check if the pointer is NULL
    if (ptr == NULL) {
        printf("ptr is NULL.\n");
    }

    // Compare NULL with zero
    if (ptr == 0) {
        printf("NULL is equivalent to 0.\n");
    }

    return 0;
}
