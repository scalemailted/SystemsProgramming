#include <stdio.h>
#include <string.h>

// Function to add two binary strings
void addBinary(const char *a, const char *b, char *result, int size) {
    int carry = 0;
    for (int i = size - 1; i >= 0; i--) {
        int bitA = a[i] - '0'; // Convert char to int
        int bitB = b[i] - '0'; // Convert char to int
        int sum = bitA + bitB + carry;

        // Determine the bit to set in the result and the carry
        result[i + 1] = (sum % 2) + '0'; // Convert int to char
        carry = sum / 2;
    }
    result[0] = carry + '0'; // Set the carry bit at the start of the result
}

int main() {
    const char *binary1 = "1111";
    const char *binary2 = "1111";
    int size = 4;
    char result[size + 2]; // +1 for the carry bit and +1 for null terminator

    addBinary(binary1, binary2, result, size);

    result[size + 1] = '\0'; // Null-terminate the result string

    printf("Binary addition: %s + %s = %s\n", binary1, binary2, result);
    printf("The sum of two %d-bit strings can be up to %d bits long.\n", size, size + 1);

    return 0;
}
