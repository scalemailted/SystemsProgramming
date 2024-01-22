#include <stdio.h>

// Use typedef to create a Fraction type
typedef struct Fraction {
    int numerator;
    int denominator;
} Fraction;

// Function to print a Fraction
void printFraction(Fraction f) {
    printf("Fraction: %d/%d\n", f.numerator, f.denominator);
}

int main() {
    // Declare two Fractions
    Fraction f1, f2;

    // C is dangerous! Let's print values before initializing them
    printf("\nf1 [BEFORE init fields]\n");
    printFraction(f1);

    // Initialize the first Fraction
    f1.numerator = 22;
    f1.denominator = 7;
    printf("\nf1 [AFTER init fields]\n");
    printFraction(f1);

    // C is dangerous! Let's print values before initializing them
    printf("\nf2 [BEFORE init fields]\n");
    printFraction(f2);

    // Copy f1 into f2
    f2 = f1;
    printf("\nf2 [AFTER copying f1 into f2]\n");
    printFraction(f2);

    return 0;
}
