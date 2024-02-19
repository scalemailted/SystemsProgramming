// Systems Programming: Understanding Data Representations
// This program shows how data types are represented in memory. 
// It uses helper functions to print the byte-level representation of these data types.

#include <stdio.h>   // Standard input/output library for printf
#include <string.h>  // String library for strlen function

// Typedef for a byte pointer for ease of use in showing bytes of various types
typedef unsigned char *byte_pointer;

// show_bytes: A utility function to display the byte representation of arbitrary data.
// start: Pointer to the beginning of the data block.
// len: Length of the data block in bytes.
void show_bytes(byte_pointer start, int len) {
    int i;
    for (i = 0; i < len; i++)
        printf(" %.2x", start[i]);  // Print each byte as a two-digit hexadecimal number
    printf("\n");
}

// show_int: Displays the byte representation of an integer.
// x: Integer variable whose bytes are to be displayed.
void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int)); // Cast the address of x to byte_pointer
}

// show_float: Displays the byte representation of a float.
// x: Float variable whose bytes are to be displayed.
void show_float(float x) {
    show_bytes((byte_pointer) &x, sizeof(float)); // Cast the address of x to byte_pointer
}

// show_pointer: Displays the byte representation of a pointer.
// x: Pointer whose bytes are to be displayed.
void show_pointer(void *x) {
    show_bytes((byte_pointer) &x, sizeof(void *)); // Cast the address of x to byte_pointer
}

// show_string: Displays the byte representation of a string, including the null terminator.
// s: String whose bytes are to be displayed.
void show_string(const char *s) {
    show_bytes((byte_pointer) s, strlen(s) + 1); // +1 to include the null terminator
}

// The main function to demonstrate the usage of the above functions
int main() {
    int i = 12345;
    float f = 12345.0;
    int *p = &i;
    const char *s = "12345";

    // Displaying byte representations of different types
    printf("int: %d --> ",i);
    show_int(i);       // Show the bytes of the int

    printf("float: %f --> ",f);
    show_float(f);     // Show the bytes of the float

    printf("ptr: %p --> ", (void*)p);
    show_pointer(p);   // Show the bytes of the pointer

    printf("str: \"%s\" --> ",s);
    show_string(s);    // Show the bytes of the string

    return 0;
}
