#include <stdio.h>

#define ARRAY_SIZE 10  // Preprocessor directive to define a constant for array size

// Helper function to print an integer array
void printIntArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // Initialize an ARRAY_SIZE-element integer array
    int numbers[ARRAY_SIZE];

    // Print array before assignment
    printf("Integer array before assignment:\n");
    printIntArray(numbers, ARRAY_SIZE);

    // Assign values using box notation
    for (int i = 0; i < ARRAY_SIZE; i++) {
        numbers[i] = i * i; // Assign square of index
    }

    // Print array after assignment
    printf("Integer array after assignment:\n");
    printIntArray(numbers, ARRAY_SIZE);

    // Initialize a character array with a string literal
    char greeting[] = "Hello, World!";
    printf("Character array (string):\n%s\n", greeting);

    // Initialize an integer array with an array literal
    printf("Integer array initialized with array literal:\n");
    int numbersMore[] = {1, 2, 3, 4, 5};
    printIntArray(numbersMore, 5);

    // Accessing an out-of-bounds array index
    // Using ARRAY_SIZE + 5 to generate an out-of-bounds index
    int badIndex = ARRAY_SIZE + 5;
    printf("Accessing out-of-bounds index in numbers array:\n");
    printf("numbers[%d] = %d\n", badIndex, numbers[badIndex]); // Undefined behavior

    return 0;
}
