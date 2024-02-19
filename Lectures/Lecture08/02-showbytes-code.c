// 02-showbytes-code.c
// Systems Programming: Binary Representation of Code and Data
// This program demonstrates the binary storage of code and data in memory. 
// It features a `sum` function to add two integers and a `main` function calling `sum`. 
// The focus is on how both data and the `sum` function's instructions are represented in memory. 
// This is analyzed through compiling and disassembling the code to view its binary form.


#include <stdio.h>

// sum: Function to add two integers. This function, when compiled, is stored in memory as binary code.
// x, y: Two integer arguments whose sum will be returned.
int sum(int x, int y) {
    return x + y; // Returns the sum of x and y.
}

// main: Entry point of the program.
// Calls the sum function and prints the result, demonstrating how data is processed in binary.
int main() {
    printf("Sum of 1 and 2 is %d\n", sum(1, 2)); // Calls sum function and prints the result.
    return 0;
}
