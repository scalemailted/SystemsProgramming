#include <stdio.h>
#include <limits.h> // For INT_MIN definition

// Function to calculate the two's complement (signed) value of a binary string
int B2T(const char *binary, int length) {
    int value = 0;
    for (int i = 0; i < length; ++i) {
        if (binary[i] == '1') {
            // If it's the MSB, treat it as negative
            if (i == 0 && length > 1) {
                value -= (1 << (length - 1));
            } else { 
                value += (1 << (length - i - 1));
            }
        }
    }
    return value;
}

int main() {
    // Example usage of the B2T function
    const char *binaryString1 = "01100011";
    const char *binaryString2 = "10010101";

    int value1 = B2T(binaryString1, 8);
    int value2 = B2T(binaryString2, 8);

    printf("The two's complement for binary %s is: %d\n", binaryString1, value1);
    printf("The two's complement for binary %s is: %d\n", binaryString2, value2);

    return 0;
}