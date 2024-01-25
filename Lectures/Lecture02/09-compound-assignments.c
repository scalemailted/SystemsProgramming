#include <stdio.h>

int main() {
    int a, temp;

    // Increment by RHS
    a = 10;
    temp = a;
    a += 5; // equivalent to a = a + 5
    printf("%d += 5 results in %d\n", temp, a);

    // Decrement by RHS
    a = temp; // reset to original value
    a -= 3; // equivalent to a = a - 3
    printf("%d -= 3 results in %d\n", temp, a);

    // Multiply by RHS
    a = temp; // reset to original value
    a *= 2; // equivalent to a = a * 2
    printf("%d *= 2 results in %d\n", temp, a);

    // Divide by RHS
    a = temp; // reset to original value
    a /= 4; // equivalent to a = a / 4
    printf("%d /= 4 results in %d\n", temp, a);

    // Modulus by RHS
    a = temp; // reset to original value
    a %= 3; // equivalent to a = a % 3
    printf("%d %%= 3 results in %d\n", temp, a);

    // Bitwise left shift by RHS
    a = 1;
    temp = a;
    a <<= 2; // equivalent to a = a << 2
    printf("%d <<= 2 results in %d\n", temp, a);

    // Bitwise right shift by RHS
    a = temp; // reset to original value
    a >>= 1; // equivalent to a = a >> 1
    printf("%d >>= 1 results in %d\n", temp, a);

    // Bitwise AND with RHS
    a = 6; // binary: 0110
    temp = a;
    a &= 3; // binary: 0011, equivalent to a = a & 3
    printf("%d &= 3 results in %d\n", temp, a);

    // Bitwise OR with RHS
    a = temp; // reset to original value
    a |= 2; // binary: 0010, equivalent to a = a | 2
    printf("%d |= 2 results in %d\n", temp, a);

    // Bitwise XOR with RHS
    a = temp; // reset to original value
    a ^= 1; // binary: 0001, equivalent to a = a ^ 1
    printf("%d ^= 1 results in %d\n", temp, a);

    return 0;
}
