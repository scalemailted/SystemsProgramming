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

// Function to multiply two 5-bit floating-point numbers
TinyFloat multiplyTinyFloat(TinyFloat tf1, TinyFloat tf2) {
    // Multiply the decimal values
    double decimalProduct = tinyFloatToDecimal(tf1) * tinyFloatToDecimal(tf2);

    // Initialize result
    TinyFloat result = {0, 0, 0};

    // Determine sign using XOR
    result.sign = tf1.sign ^ tf2.sign;

    // Extract exponent and fraction from the product
    if (decimalProduct != 0) {
        int exponent = (int)floor(log2(fabs(decimalProduct)));
        result.exp = exponent + 1; // Adjusting for the bias

        double significand = fabs(decimalProduct) / pow(2, exponent);
        result.frac = (int)((significand - 1.0) * 4);
    }

    // Overflow handling
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
    //TinyFloat tf1 = {0, 1, 1}; // Representing 1.25
    TinyFloat tf1 = {0, 0, 0}; // Representing 0.5
    TinyFloat tf2 = {0, 2, 1}; // Representing 2.5

    printf("Number 1: ");
    printTinyFloat(tf1);
    printf("Number 2: ");
    printTinyFloat(tf2);

    // Multiply the two numbers
    TinyFloat result = multiplyTinyFloat(tf1, tf2);
    printf("Result of multiplication: ");
    printTinyFloat(result);

    return 0;
}
