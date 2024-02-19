#include <stdio.h>

int main() {
    unsigned int x = 0x89ABCDEF; // Original value
    unsigned int mask = 0xFF;    // Mask with least significant 8 bits set to 1

    // Perform the masking operation
    unsigned int masked_value = x & mask;

    // Print the results
    printf("Original value: 0x%X\n", x);
    printf("Mask: 0x%X\n", mask);
    printf("Masked value: 0x%X\n", masked_value);

    return 0;
}
