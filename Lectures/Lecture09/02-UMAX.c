#include <stdio.h>
#include <stdint.h>

// Function to calculate the maximum unsigned integer value for w bits
uint32_t UMax(int w) {
    return (1U << w) - 1;
}

int main() {
    // Example usage of the UMax function
    int width = 4; // 4 bits
    uint32_t max_value = UMax(width);

    printf("UMax for %d bits is: %u\n", width, max_value);

    return 0;
}
