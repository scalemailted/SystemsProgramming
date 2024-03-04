#include <stdio.h>

// Function to convert unsigned int to two's complement int value
int U2T(unsigned int u, int w) {
    // Compute two's complement by casting to signed integer
    // The cast will handle the wrap-around for numbers too large to fit in w bits.
    return (int)(u << (32 - w)) >> (32 - w);
}

int main() {
    int w = 8;              // Number of bits to represent the two's complement
    unsigned int u = 99;    // Example unsigned integer value
    unsigned int v = 255; // Example unsigned integer value that's too high

    int twosComplementValue = U2T(u, w);
    printf("The two's complement representation of %u is: %d\n", u, twosComplementValue);

    twosComplementValue = U2T(v, w);
    printf("The two's complement representation of %u is: %d\n", v, twosComplementValue);

    return 0;
}
