#include <stdio.h>

// Function to perform two's-complement division with rounding up
int twos_complement_divide(int x, unsigned int k) {
    // Apply the bias only if 'x' is negative
    if (x < 0) {
        return (x + (1 << k) - 1) >> k;
    } else {
        return x >> k; // No bias needed for non-negative 'x'
    }
}

int main() {
    int x = -15; // Example negative two's-complement number
    unsigned int k = 2; // Divide by 2^k (4 in this case)

    // Perform division with biasing for proper rounding up
    int result = twos_complement_divide(x, k);

    printf("Two's-complement division of %d by 2^%u with rounding up: %d\n", x, k, result);

    return 0;
}

