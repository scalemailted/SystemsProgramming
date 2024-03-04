#include <stdio.h>
#include <stdint.h>

int main() {
    // Example numbers for multiplication
    uint32_t a = 300000; // Change these numbers to try different values
    uint32_t b = 300000;

    // Perform multiplication, which is automatically truncated to fit the 32-bit integer
    uint32_t result = a * b;

    // Print the results
    printf("Multiplying %u and %u\n", a, b);
    printf("Truncated result (32-bit): %u\n", result);

    // For comparison, perform the multiplication with a larger data type to see the full result
    uint64_t full_result = (uint64_t)a * (uint64_t)b;
    printf("Full result (64-bit): %llu\n", full_result);

    // Now explicitly truncate the full result to 32 bits to demonstrate truncation
    uint32_t truncated_result = (uint32_t)full_result;
    printf("Explicitly truncated result (32-bit): %u\n", truncated_result);

    return 0;
}
