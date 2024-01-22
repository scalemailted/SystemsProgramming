/*
 * Pointer Demonstration Program
 *
 * This program is designed to demonstrate the use of pointers in C,
 * specifically highlighting the dangers of using uninitialized pointers.
 * The program creates an uninitialized pointer and deliberately uses it
 * to write to an arbitrary memory location. This action is intended to 
 * demonstrate what not to do with pointers, as it leads to undefined behavior,
 * potentially causing a segmentation fault or other erratic behavior.
 *
 * The program then showcases the correct way to initialize and use pointers.
 * This is done by initializing a pointer to point to a valid int variable
 * and using the pointer to modify the variable's value.
 *
 * WARNING: This program contains intentional errors for educational purposes.
 * Running this program might cause unpredictable behavior, including crashes.
 * It's important to understand and avoid such practices in real-world programming.
 */

#include <stdio.h>

int main() {
    int *p; // Declare an uninitialized pointer

    // Perform some arbitrary memory operations
    int tempArray[10];
    for (int i = 0; i < 10; i++) {
        tempArray[i] = i * i;
    }

    // Now use the uninitialized pointer
    //*p = 13; // Dangerous and incorrect
    //printf("Incorrect usage - random value or crash: %d\n", *p);

    // Correct way to use pointers
    int value = 0;
    p = &value;
    *p = 13;
    printf("Correct usage - value: %d\n", value);

    return 0;
}

