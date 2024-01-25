#include <stdio.h>

#define ARRAY_SIZE 1000  // Define a constant for the array size

// Use typedef to create a Fraction type
typedef struct fraction {
    int numerator;
    int denominator;
} Fraction;

// Function to print a fraction
void printFraction(Fraction f) {
    printf("Fraction: %d/%d\n", f.numerator, f.denominator);
}

int main() {
    // Declare an array of ARRAY_SIZE fraction structs
    Fraction numbers[ARRAY_SIZE];

    // Initialize the first few elements in the array
    numbers[0].numerator = 22;
    numbers[0].denominator = 7;

    numbers[1].numerator = 3;
    numbers[1].denominator = 4;

    numbers[2].numerator = 5;
    numbers[2].denominator = 6;

    // Print the fractions
    printf("numbers[0] ");
    printFraction(numbers[0]);

    printf("numbers[1] ");
    printFraction(numbers[1]);

    printf("numbers[2] ");
    printFraction(numbers[2]);

    // Accessing an out-of-bounds array index intentionally
    printf("Out-of-Bounds:\n");
    printf("numbers[1000] "); // Using ARRAY_SIZE as the index to go out-of-bounds
    int badIndex = ARRAY_SIZE + 1;
    printFraction(numbers[badIndex]); // Undefined behavior

    return 0;
}
