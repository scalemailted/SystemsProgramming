#include <stdio.h>

// Declare the struct fraction
struct fraction {
    int numerator;
    int denominator;
};

// Function to print a fraction
void printFraction(struct fraction f) {
    printf("Fraction: %d/%d\n", f.numerator, f.denominator);
}

int main() {
    // Declare two fractions
    struct fraction f1, f2;

    // C is dangerous! lets print values before initializting them
    printf("\nf1 [BEFORE init fields]\n");
    printFraction(f1);

    // Initialize the first fraction
    f1.numerator = 22;
    f1.denominator = 7;
    printf("\nf1 [AFTER init fields]\n");
    printFraction(f1);

    // C is dangerous! lets print values before initializting them
    printf("\nf2 [BEFORE init fields]\n");
    printFraction(f2);

    // Copy f1 into f2
    f2 = f1;
    printf("\nf2 [AFTER copying f1 into f2]\n");
    printFraction(f2);

    return 0;
}
