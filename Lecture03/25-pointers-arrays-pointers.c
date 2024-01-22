// array_of_pointers_to_structs.c
#include <stdio.h>

struct fraction {
    int numerator;
    int denominator;
};

void printFraction(struct fraction *f) {
    printf("Fraction: %d/%d\n", f->numerator, f->denominator);
}

int main() {
    struct fraction f1 = {22, 7};
    struct fraction *fract_ptr_array[1] = {&f1};

    printFraction(fract_ptr_array[0]);

    return 0;
}
