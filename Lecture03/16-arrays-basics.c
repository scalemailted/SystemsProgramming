#include <stdio.h>

// Helper function to print an integer array
void printIntArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // Initialize a 10-element integer array
    int numbers[10];
    int badIndex= 15;

    // Print array before assignment
    printf("Integer array before assignment:\n");
    printIntArray(numbers, 10);

    // Assign values using box notation
    for (int i = 0; i < 10; i++) {
        numbers[i] = i * i; // Assign square of index
    }

    // Print array after assignment
    printf("Integer array after assignment:\n");
    printIntArray(numbers, 10);

    // Initialize a character array with a string literal
    char greeting[] = "Hello, World!";
    printf("Character array (string):\n%s\n", greeting);

    // Initialize a int array with a array literal
    printf("Integer array initialized with array literal:\n");
    int numbersMore[] = {1,2,3,4,5};
    printIntArray(numbersMore, 5);

    // Accessing an out-of-bounds array index
    printf("Accessing out-of-bounds index in numbers array:\n");
    printf("numbers[15] = %d\n", numbers[badIndex]); // Undefined behavior

    return 0;
}
