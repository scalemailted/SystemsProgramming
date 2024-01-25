#include <stdio.h>

// Function to convert an unsigned int to a binary string
void toBinary(unsigned int num, char *str, int bits) {
    str[bits] = '\0';
    for (int i = bits - 1; i >= 0; --i, num >>= 1) {
        str[i] = (num & 1) + '0';
    }
}

int main() {
    unsigned int a = 12; // binary: 1100
    unsigned int b = 5;  // binary: 0101
    unsigned int result;
    char binaryStrA[33], binaryStrB[33], binaryStrResult[33];  // Strings to store binary representations

    // Initial values
    toBinary(a, binaryStrA, 8);
    toBinary(b, binaryStrB, 8);
    printf("a = %s, b = %s\n", binaryStrA, binaryStrB);

    // Bitwise AND
    result = a & b;
    toBinary(result, binaryStrResult, 8);
    printf("%s & %s = %s (Bitwise AND)\n", binaryStrA, binaryStrB, binaryStrResult);

    // Bitwise OR
    result = a | b;
    toBinary(result, binaryStrResult, 8);
    printf("%s | %s = %s (Bitwise OR)\n", binaryStrA, binaryStrB, binaryStrResult);

    // Bitwise XOR
    result = a ^ b;
    toBinary(result, binaryStrResult, 8);
    printf("%s ^ %s = %s (Bitwise XOR)\n", binaryStrA, binaryStrB, binaryStrResult);

    // Bitwise NOT
    result = ~a;
    toBinary(result, binaryStrResult, 8);
    printf("~%s = %s (Bitwise NOT of a)\n", binaryStrA, binaryStrResult);

    // Left shift (by 1 bit)
    result = a << 1;
    toBinary(result, binaryStrResult, 8);
    printf("%s << 1 = %s (Left shift a by 1 bit)\n", binaryStrA, binaryStrResult);

    // Right shift (by 1 bit)
    result = a >> 1;
    toBinary(result, binaryStrResult, 8);
    printf("%s >> 1 = %s (Right shift a by 1 bit)\n", binaryStrA, binaryStrResult);

    return 0;
}



