#include <stdio.h>

// Function to convert two's complement int value to unsigned int
unsigned int T2U(int t, int w) {
    // Interpret the bit pattern of 't' as unsigned
    return (unsigned int)t & ((1U << w) - 1);
}

int main() {
    int w = 8;              // Number of bits to represent the two's complement
    int x = 99;
    int y = -1;             // Example two's complement value

    unsigned int unsignedValue = T2U(x, w);
    printf("The unsigned representation of %d is: %u\n", x, unsignedValue);

    unsignedValue = T2U(y, w);
    printf("The unsigned representation of %d is: %u\n", y, unsignedValue);;

    return 0;
}
