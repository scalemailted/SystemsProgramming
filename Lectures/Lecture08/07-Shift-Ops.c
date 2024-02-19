#include <stdio.h>

void print_binary(unsigned char value) {
    for (int i = 7; i >= 0; i--) {
        printf("%c", (value & (1 << i)) ? '1' : '0');
    }
}

int main() {
    unsigned char x1 = 0b01100011; // Binary for Value 1: 01100011
    unsigned char x2 = 0b10010101; // Binary for Value 2: 10010101

    //Starting values
    printf("-------------------------\n");
    printf("x1: "); print_binary(x1); printf("\n");
    printf("x2: "); print_binary(x2); printf("\n\n");

    // Left shift by 4
    printf("x1 << 4: "); print_binary(x1 << 4); printf("\n");
    printf("x2 << 4: "); print_binary(x2 << 4); printf("\n\n");

    //Starting values
    printf("-------------------------\n");
    printf("x1: "); print_binary(x1); printf("\n");
    printf("x2: "); print_binary(x2); printf("\n\n");

    // Logical right shift by 4
    printf("x1 >> 4 (logical): "); print_binary(x1 >> 4); printf("\n");
    printf("x2 >> 4 (logical): "); print_binary(x2 >> 4); printf("\n\n");

    // Arithmetic right shift by 4 would be the same as logical for unsigned char
    // Demonstrating with negative value for signed char to show arithmetic shift
    signed char x1_negative = -64; // 11000000 in binary for Value 1 after left shift by 4
    signed char x2_positive =  32; // 011100000 in binary for Value 2 after left shift by 4

    //Starting values
    printf("-------------------------\n");
    printf("x1_negative: "); print_binary(x1_negative); printf("\n");
    printf("x2_positive: "); print_binary(x2_positive); printf("\n\n");

    printf("x1_negative >> 4 (arithmetic): "); print_binary(x1_negative >> 4); printf("\n");
    printf("x2_positive >> 4 (arithmetic): "); print_binary(x2_positive >> 4); printf("\n");

    return 0;
}
