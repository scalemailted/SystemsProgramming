#include <stdio.h>
#include <math.h> // Include the math library for INFINITY and NAN

// Define a struct to represent the 4-bit floating-point format
typedef struct {
    unsigned int sign : 1;
    unsigned int exp : 2;
    unsigned int frac : 1;
} TinyFloat;

// Function to classify and print the 4-bit floating-point number
void printTinyFloat(TinyFloat tf) {
    const char *type;
    float value;
    int bias = 1; // For 2 exponent bits, the bias is 2^(2-1) - 1

    // Check the type of the floating-point number
    if (tf.exp == 0) {
        if (tf.frac == 0) {
            // Zero
            type = "Zero";
            value = 0.0f;
        } else {
            // Denormalized
            type = "Denormalized";
            value = (tf.sign ? -1 : 1) * (tf.frac / 2.0f) * powf(2, 1 - bias); // Use 2^1 as the smallest exponent for denormalized numbers
        }
    } else if (tf.exp == 3) { // 3 is the max value for 2 exponent bits
        if (tf.frac == 0) {
            // Infinity
            type = "Infinity";
            value = tf.sign ? -INFINITY : INFINITY;
        } else {
            // NaN
            type = "NaN";
            value = NAN;
        }
    } else {
        // Normalized
        type = "Normalized";
        value = (tf.sign ? -1 : 1) * (1 + tf.frac / 2.0f) * powf(2, tf.exp - bias);
    }

    // Print the type, bits, and the calculated value
    printf("s: %d, exp: %01x, frac: %01x (%s), value: %f\n", tf.sign, tf.exp, tf.frac, type, value);
}

int main() {
    TinyFloat tf;

    // Loop over all possible values of the 4-bit floating-point number
    for (int s = 0; s < 2; ++s) {
        for (int e = 0; e < 4; ++e) { // 2 exponent bits: 0-3
            for (int f = 0; f < 2; ++f) { // 1 fraction bit: 0-1
                tf.sign = s;
                tf.exp = e;
                tf.frac = f;
                printTinyFloat(tf);
            }
        }
    }
    
    return 0;
}
