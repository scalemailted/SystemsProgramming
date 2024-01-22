// pointer_to_struct.c
#include <stdio.h>

struct fraction {
    int numerator;
    int denominator;
};

void printFraction(struct fraction *f) {
    printf("Fraction: %d/%d\n", f->numerator, f->denominator);
}

int main() {
    struct fraction myFraction = {22, 7};
    struct fraction *f1 = &myFraction;

    printFraction(f1);

    return 0;
}
