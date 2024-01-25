#include <stdio.h>

void addByReference(int *value, int other); 
int addByValue(int value, int other);

int main() {
    int originalValue = 10;
    int otherValue = 5;

    // Call by Reference
    printf("Original Value: %d\n", originalValue);
    addByReference(&originalValue, otherValue);
    printf("After addByReference: %d\n", originalValue);

    // Call by Value
    originalValue = 10; // Resetting to original value
    printf("Original Value: %d\n", originalValue);
    originalValue = addByValue(originalValue, otherValue);
    printf("After modifyByValue: %d\n", originalValue);

    return 0;
}


// Function to modify value using Call by Reference
void addByReference(int *value, int other) {
    *value += other; // Modify the value at the address pointed to by 'value'
}

// Function to modify value using Call by Value
int addByValue(int value, int other) {
    value += other; // This modification does not affect the original variable
    return value;
}