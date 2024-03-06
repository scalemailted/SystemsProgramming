#include <stdio.h>
#include <math.h> // Include the math library for INFINITY and NAN

// Define a struct to represent the tiny floating-point format
typedef struct {
    unsigned int sign : 1;
    unsigned int exp : 4;
    unsigned int frac : 3;
} TinyFloat;

// Function to classify and print the tiny floating-point number
void printTinyFloat(TinyFloat tf) {
    const char *type;
    float value;

    // Check the type of the floating-point number
    if (tf.exp == 0) {
        if (tf.frac == 0) {
            // Zero
            type = "Zero";
            value = 0.0f;
        } else {
            // Denormalized
            type = "Denormalized";
            // For denormalized values, the exponent is effectively -6 after bias adjustment
            value = (tf.sign ? -1 : 1) * (tf.frac / 8.0f) * powf(2, -6);
        }
    } else if (tf.exp == 15) {
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
        // For normalized values, subtract the bias (7) from the exponent
        value = (tf.sign ? -1 : 1) * (1 + tf.frac / 8.0f) * powf(2, tf.exp - 7);
    }

    // Print the type, bits, and the calculated value
    printf("s: %d, exp: %02x, frac: %03x (%s), value: %f\n", tf.sign, tf.exp, tf.frac, type, value);
}

int main() {
    TinyFloat tf;

    // Loop over all possible values of the tiny floating-point number
    for (int s = 0; s < 2; ++s) {
        for (int e = 0; e < 16; ++e) {
            for (int f = 0; f < 8; ++f) {
                tf.sign = s;
                tf.exp = e;
                tf.frac = f;
                printTinyFloat(tf);
            }
        }
    }
    
    return 0;
}
