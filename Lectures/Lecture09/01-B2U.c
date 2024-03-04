#include <stdio.h>
#include <math.h>

// Function to calculate the unsigned integer value of a binary string

unsigned int B2U(const char *binary, int length) {
    unsigned int value = 0;
    for (int i = 0; i < length; ++i) {
        if (binary[i] == '1') {
            value += (1U << (length - i - 1));
        }
    }
    return value;
}

int main() {
    // Example usage of the B2U function
    const char *binaryString1 = "01100011";
    const char *binaryString2 = "10010101";
    
    unsigned int value1 = B2U(binaryString1, 8);
    unsigned int value2 = B2U(binaryString2, 8);

    printf("The unsigned integer for binary %s is: %u\n", binaryString1, value1);
    printf("The unsigned integer for binary %s is: %u\n", binaryString2, value2);

    return 0;
}

/*
The B2U (Binary to Unsigned) function converts a binary string representation 
into its corresponding unsigned integer value. Here's a breakdown of how the function works:

Parameters
binary: A pointer to a character array (a C string) that represents a binary number. 
length: The number of characters in the binary string

Process
Initialization: 
The function starts by initializing an unsigned int variable named value to 0. 
This variable will accumulate the result of converting the binary string 
to its unsigned integer equivalent.

Iteration: 
It then iterates over each character in the binary string, 
starting from the first character (the most significant bit in the binary number) 
to the last character (the least significant bit). 
The loop index i serves as the current bit position being processed, 
ranging from 0 to length - 1.

Bitwise Conversion: 
Within the loop, the function checks if the current bit (character in the string) is '1'. 
If so, it calculates the value of this bit in its corresponding position within an unsigned integer 
and adds this value to value. 
This calculation is performed using the bitwise shift left operation (1U << (length - i - 1)).

1U is an unsigned integer literal with a value of 1. 
This ensures that the bitwise operations are performed on an unsigned basis, 
avoiding potential issues with signed integer behavior.
The shift operation << moves the 1 bit to the left by (length - i - 1) positions. 
This effectively calculates the power of 2 that the bit represents in the binary number. 


Accumulation: 
For each '1' bit found in the binary string, 
its corresponding value is added to value, 
accumulating the total unsigned integer representation of the binary string.

Return Value: 
After iterating through all bits in the binary string, 
the function returns the accumulated value, 
which now represents the unsigned integer equivalent of the binary string.
*/
