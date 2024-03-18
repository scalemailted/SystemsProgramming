#include <stdio.h>

// Function prototype declaration
long mult2(long a, long b);

// Function to multiply two long integers
long mult2(long a, long b) {
    return a * b;
}

// Function to store the result of multiplication at a given memory location
void multstore(long x, long y, long *dest) {
    long t = mult2(x, y);
    *dest = t;
}

