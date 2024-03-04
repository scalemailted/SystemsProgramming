#include <stdio.h>

typedef unsigned char *byte_pointer;

// Function to show bytes of memory in little-endian order
void show_bytes(byte_pointer start, size_t len) {
    int i;
    for (i = len - 1; i >= 0; i--)
        printf(" %.2x", start[i]);
    printf("\n");
}

int main() {
    short sx = -12345; // Corrected the minus sign
    unsigned short usx = sx; // 53191 is the unsigned representation of -12345
    int x = sx; // -12345 as an int
    unsigned ux = usx; // 53191 as an unsigned int

    printf("sx = %d:\t", sx);
    show_bytes((byte_pointer) &sx, sizeof(short));

    printf("usx = %u:\t", usx);
    show_bytes((byte_pointer) &usx, sizeof(unsigned short));

    printf("x = %d:\t", x);
    show_bytes((byte_pointer) &x, sizeof(int));

    printf("ux = %u:\t", ux);
    show_bytes((byte_pointer) &ux, sizeof(unsigned));

    return 0;
}
