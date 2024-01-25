#include <stdio.h>

int main() {
    int value = 5;
    int *ptr;

    // Use the address operator to obtain the memory address of 'value'
    ptr = &value;

    // Print the original value
    printf("Original value: %d\n", value);

    // Read value using the pointer
    printf("Value read via pointer: %d\n", *ptr);

    // Write new value to the memory address using the pointer
    *ptr = 10;
    printf("New value written via pointer: %d\n", value);

    return 0;
}
