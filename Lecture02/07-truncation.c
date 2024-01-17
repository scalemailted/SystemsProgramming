#include <stdio.h>

int main() {
    // Truncation of int to char
    int i = 321;
    char ch = i; // Truncation occurs here
    printf("Original int: %d\n", i);
    printf("Truncated to char: %d\n\n", ch);

    // Truncation of double to int
    double pi = 3.14159;
    int truncatedInt = pi; // Truncation occurs here, dropping the fractional part
    printf("Original double: %f\n", pi);
    printf("Truncated to int: %d\n\n", truncatedInt);

    // Double to float truncation
    double longDouble = 123456789.123456789; // A double with many decimal places
    float truncatedFloat = longDouble;       // Truncation occurs here

    printf("Original double: %.15f\n", longDouble);
    printf("Truncated to float: %.15f\n", truncatedFloat);

    return 0;
}
