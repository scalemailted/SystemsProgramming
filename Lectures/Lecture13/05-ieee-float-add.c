#include <stdio.h>
#include <math.h>

typedef struct {
    unsigned int sign : 1;
    unsigned int exp : 2;
    unsigned int frac : 2;
} TinyFloat;

// Helper function to convert TinyFloat to decimal
double tinyFloatToDecimal(TinyFloat tf) {
    return (tf.sign ? -1 : 1) * (1 + (double)tf.frac / 4.0) * pow(2, tf.exp - 1);
}

// Function to add two 5-bit floating-point numbers
TinyFloat addTinyFloat(TinyFloat tf1, TinyFloat tf2) {
    // Convert TinyFloats to decimal values for addition
    double decimalValue1 = tinyFloatToDecimal(tf1);
    double decimalValue2 = tinyFloatToDecimal(tf2);

    // Add the decimal values
    double decimalSum = decimalValue1 + decimalValue2;

    // Now we need to convert the decimal sum back to TinyFloat representation.
    // This part of the code will be an approximation since we can't always
    // represent the exact decimal values with a 5-bit floating point format.

    // Initialize result
    TinyFloat result = {0, 0, 0};

    // Check if the sum is negative for the sign bit
    if (decimalSum < 0) {
        result.sign = 1;
        decimalSum = -decimalSum; // Work with the absolute value for now
    }

    // Extract exponent by logarithm base 2
    if (decimalSum != 0) { // Log of 0 is undefined
        int exponent = (int)floor(log2(decimalSum));
        result.exp = exponent + 1; // Adjusting for the bias (which is 1 for 2-bit exponent)

        // Extract fraction
        double significand = decimalSum / pow(2, exponent);
        result.frac = (int)((significand - 1.0) * 4); // Multiplying by 4 because we have 2 fraction bits
    }

    // Overflow handling (exponents are in the range of 0 to 3 for 2 bits)
    if (result.exp > 3) {
        result.exp = 3;
        result.frac = 3; // Set to max value (representing infinity)
    }

    return result;
}

void printTinyFloat(TinyFloat tf) {
    double value = tinyFloatToDecimal(tf);
    printf("s: %d, exp: %d, frac: %d, value: %f\n", tf.sign, tf.exp, tf.frac, value);
}

int main() {
    printf("\nComplete 5-bit Numerical Encoding.\n");
    // Loop over all possible values of the 5-bit floating-point number
    for (int s = 0; s < 2; ++s) {
        for (int e = 0; e < 4; ++e) { // 2 exponent bits: 0-3
            for (int f = 0; f < 4; ++f) { // 2 fraction bits: 0-3
                TinyFloat tf = {s, e, f};
                printTinyFloat(tf);
            }
        }
    }

    TinyFloat tf1 = {0, 1, 1}; // Representing 1.25
    TinyFloat tf2 = {0, 2, 1}; // Representing 2.5

    printf("\nAddition Example:\n");
    printf("Number 1: ");
    printTinyFloat(tf1);
    printf("Number 2: ");
    printTinyFloat(tf2);

    // Add the two numbers
    TinyFloat result = addTinyFloat(tf1, tf2);
    printf("Result of addition: ");
    printTinyFloat(result);
    printf("\n");

    return 0;
}
