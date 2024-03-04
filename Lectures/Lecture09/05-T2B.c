#include <stdio.h>
#include <stdlib.h>

void T2B(int value, int width, char *binary) {
    // Handle the sign bit
    if (value < 0) {
        binary[0] = '1';
        value = -value; // Work with the positive magnitude
    } else {
        binary[0] = '0'; 
    }

    // Logic similar to U2B for remaining bits 
    for (int i = width - 1; i > 0; i--) {
        binary[width - i] = (value & (1 << (i - 1))) ? '1' : '0'; 
    }
    binary[width] = '\0'; 
}

int main() {
    int value1 = 67; 
    int value2 = -7;
    int width = 8;

    char binaryString1[width + 1];
    char binaryString2[width + 1];

    T2B(value1, width, binaryString1);
    T2B(value2, width, binaryString2);

    printf("The twos complement binary representation of %d is: %s\n", value1, binaryString1);
    printf("The twos complement binary representation of %d is: %s\n", value2, binaryString2);

    return 0;
}