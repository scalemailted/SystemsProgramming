#include <stdio.h>

typedef struct Fraction Fraction;

struct Fraction {
    int numerator;
    int denominator;
    void (*init)(Fraction *f, int numerator, int denominator);
    void (*print)(const Fraction *f);
};

// Function to initialize a fraction
void initFraction(Fraction *f, int numerator, int denominator) {
    f->numerator = numerator;
    f->denominator = denominator;
}

// Function to print a fraction
void printFraction(const Fraction *f) {
    printf("%d/%d\n", f->numerator, f->denominator);
}

int main() {
    Fraction f1, f2;

    // Assign function pointers
    f1.init = initFraction;
    f1.print = printFraction;
    f2.init = initFraction;
    f2.print = printFraction;

    // Use the function pointers
    f1.init(&f1, 1, 2);
    f2.init(&f2, 3, 4);

    printf("Fraction 1: ");
    f1.print(&f1);

    printf("Fraction 2: ");
    f2.print(&f2);

    return 0;
}
