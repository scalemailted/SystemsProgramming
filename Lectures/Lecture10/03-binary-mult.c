#include <stdio.h>

// Function to print a binary number
void print_binary(unsigned n) {
    if (n > 1) {
        print_binary(n >> 1); // Recursively print the bits to the left
    }
    printf("%d", n & 1); // Print the last bit
}

// Function to multiply two binary numbers and show intermediary steps
unsigned multiply_binary(unsigned a, unsigned b) {
    unsigned result = 0;
    unsigned shifts = 0; // Keep track of how many times we've shifted
    
    printf("\nShifts + Additions\n");

    while (b > 0) {
        if (b & 1) {
            if (result != 0) {
                // Print the current result before adding the next term
                print_binary(result);
                printf(" + ");
            }
            print_binary(a << shifts); // Print the term we're about to add
            
            result += a << shifts; // Add the shifted number to the result

            // If there's more to add, print an equals sign
            if (b >> 1) {
                printf(" = ");
            }
        }
        b >>= 1; // Shift 'b' to the right (move to the next bit)
        shifts++; // Increment the shift counter
    }

    printf(" = ");
    print_binary(result); // Print the final result in binary
    printf(" = %u\n", result); // Print the final result in decimal

    return result;
}

int main() {
    unsigned a = 0b1011; // Binary literal for 11
    //unsigned b = 0b110;  // Binary literal for 6
    unsigned b = 0b110;  // Binary literal for 5

    printf("Multiplying binary numbers:\n  ");
    print_binary(a);
    printf(" * ");
    print_binary(b);
    printf("\n");

    unsigned result = multiply_binary(a, b);
    return 0;
}
