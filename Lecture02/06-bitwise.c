#include <stdio.h>

int main() {
    unsigned int a = 12; // binary: 1100
    unsigned int b = 5;  // binary: 0101
    unsigned int result;

    //initial values
    printf("a = %x, b = %x\n", a,b);

    // Bitwise AND
    result = a & b;
    printf("%x & %x = %x (Bitwise AND)\n",a,b, result);

    // Bitwise OR
    result = a | b;
    printf("%x | %x = %x (Bitwise OR)\n",a,b, result);

    // Bitwise XOR
    result = a ^ b;
    printf("%x ^ %x = %x (Bitwise XOR)\n",a,b, result);

    // Bitwise NOT
    result = ~a;
    printf("~%x = %x (Bitwise NOT of a)\n",a, result);

    // Left shift (by 1 bit)
    result = a << 1;
    printf("%x << 1 = %x (Left shift a by 1 bit)\n",a, result);

    // Right shift (by 1 bit)
    result = a >> 1;
    printf("%x >> 1 = %x (Right shift a by 1 bit)\n",a, result);

    return 0;
}

