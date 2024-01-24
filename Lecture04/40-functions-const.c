#include <stdio.h>

// Function declaration
void printValue(const int* ptr);

int main() {
    int number = 10;

    // Calling printValue with a pointer to number
    printValue(&number);

    return 0;
}

// Function definition
void printValue(const int* ptr) {
    printf("Value: %d\n", *ptr);
    // The following line would cause a compile error if uncommented
    // *ptr = 20;
}
