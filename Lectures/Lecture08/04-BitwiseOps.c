#include <stdio.h>

// Function to print the binary representation of a number
void print_binary(unsigned char num) {
    for (int i = 7; i >= 0; i--) {
        putchar((num & (1 << i)) ? '1' : '0');
    }
}

void print_bitwise_operation(unsigned char bin1, unsigned char bin2, unsigned char result, char* optype){
    print_binary(bin1); printf("\n");
    if (bin2){ 
        print_binary(bin2); printf("\n");
    }
    printf("-----------------\n");
    print_binary(result); printf("   %s\n\n",optype);
}


int main() {
    unsigned char binary1 = 0xF8; // 11110000 in binary
    unsigned char binary2 = 0x1F; // 00001111 in binary

    // Perform bitwise OR
    unsigned char result_or = binary1 | binary2;

    // Perform bitwise AND
    unsigned char result_and = binary1 & binary2;

    // Perform bitwise XOR
    unsigned char result_xor = binary1 ^ binary2;

    // Perform bitwise NOT
    unsigned char result_not = ~binary1;

    // Print the results for bitwise operation
    print_bitwise_operation(binary1, binary2, result_or, "OR");
    print_bitwise_operation(binary1, binary2, result_and, "AND");
     print_bitwise_operation(binary1, binary2, result_xor, "XOR");
    print_bitwise_operation(binary1, '\0', result_not, "NOT");

    return 0;
}
