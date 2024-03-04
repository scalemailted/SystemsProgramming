#include <stdio.h>
#include <string.h>
#include <limits.h>

// Function to convert a binary string to a decimal integer
int binary_to_decimal(const char *binary, int size) {
    int result = 0;
    int base = 1;
    for (int i = size - 1; i >= 0; i--) {
        result += (binary[i] - '0') * base;
        base *= 2;
    }
    // If the number is negative (two's complement), adjust the decimal value
    if (binary[0] == '1') {
        result -= base;
    }
    return result;
}

// Function to convert a decimal integer to a binary string
void decimal_to_binary(int decimal, char *binary, int size) {
    for (int i = size - 1; i >= 0; --i) {
        binary[i] = (decimal & 1) ? '1' : '0';
        decimal >>= 1;
    }
    binary[size] = '\0'; // Null-terminator for the string
}

// Function to compute the two's complement of a binary string
void two_complement(char *binary, int size) {
    // Flip the bits
    for (int i = 0; i < size; ++i) {
        binary[i] = (binary[i] == '0') ? '1' : '0';
    }

    // Add one to the result
    for (int i = size - 1; i >= 0; --i) {
        if (binary[i] == '1') {
            binary[i] = '0';
        } else {
            binary[i] = '1';
            break;
        }
    }
}

int main() {
    const int size = 4; // Size of the binary strings
    char binary[size + 1]; // +1 for the null terminator

    // Initialize with a binary string
    strcpy(binary, "1011"); // Example binary number

    printf("Original binary string: %s\n", binary);
    printf("Original decimal value: %d\n", binary_to_decimal(binary, size));

    // Compute two's complement
    two_complement(binary, size);

    printf("Two's complement negation: %s\n", binary);
    printf("Negation decimal value: %d\n", binary_to_decimal(binary, size));

    return 0;
}
