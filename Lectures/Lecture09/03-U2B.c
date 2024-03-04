#include <stdio.h>
#include <stdlib.h>

// Function to calculate the binary string representation of an unsigned integer
// Add 2^(bit position from right) to 'value' for each '1' bit, using unsigned int to avoid sign issues.
void U2B(unsigned int value, int width, char* binary) {
    for (int i = width - 1; i >= 0; i--) {
        binary[width - i - 1] = (value & (1U << i)) ? '1' : '0';
    }
    binary[width] = '\0'; // Null-terminate the string
}

int main() {
    unsigned int value1 = 99; // Example unsigned integer value
    int width = 8; // We are working with 8 bits
    
    char binaryString1[width + 1]; // +1 for the null terminator
    U2B(value1, width, binaryString1);

    printf("The binary representation of %u is: %s\n", value1, binaryString1);

    return 0;
}


/*
The U2B (Unsigned to Binary) function converts an unsigned integer value 
into its binary string representation, storing the result in the character array binary. 
The logic behind this function can be broken down into several steps:

Parameters
value: The unsigned integer to be converted into binary.
width: The number of bits to represent the value in binary. 
binary: A character array (string) where the binary representation will be stored.

Process
Iteration: 
The function iterates over each bit position 
from the most significant bit (MSB) to the least significant bit (LSB). 
This is achieved by looping i from width - 1 down to 0. 
The width - 1 starts at the MSB, and decrementing i moves towards the LSB.

Bitwise Operation: 
For each iteration, it checks if the bit at the current position i is set in the value. 
This is done using the bitwise AND operation: (value & (1U << i)). 
The expression (1U << i) generates a mask with a single bit set at the position i, 
starting from the right. 
If the result of the AND operation is non-zero, 
    it means the bit at position i is set ('1'), 
otherwise, 
    it's not set ('0').

Character Assignment: 
Based on the result of the bitwise AND operation, 
the function assigns either '1' or '0' to the corresponding position in the binary array. 
The position in the binary array is determined by width - i - 1, 
which effectively reverses the order of bits 
to match the left-to-right reading order of binary numbers. 
This ensures that the MSB is placed at the start of the string and the LSB at the end.

Null Termination: 
After filling the binary array with '1's and '0's, 
the function null-terminates the string by setting binary[width] to '\0'. 
This makes the binary array a proper C-style string 
that can be printed with %s format specifier in printf.
*/
