#include <stdio.h>

int main() {
    // Declare and initialize variables
    int a = 15;
    int b = 4;

    // Addition
    int sum = a + b;
    printf("Sum: %d + %d = %d\n", a, b, sum);

    // Subtraction
    int difference = a - b;
    printf("Difference: %d - %d = %d\n", a, b, difference);

    // Multiplication
    int product = a * b;
    printf("Product: %d * %d = %d\n", a, b, product);

    // Division
    int quotient = a / b;
    printf("Quotient: %d / %d = %d\n", a, b, quotient);

    // Modulus (remainder of division)
    int remainder = a % b;
    printf("Remainder: %d %% %d = %d\n", a, b, remainder);

    return 0;
}
