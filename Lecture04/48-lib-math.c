#include <stdio.h>
#include <math.h>

int main() {
    double number = 16.0;
    double base = 2.0;
    double angle = 45.0; // Angle in degrees

    // Square root
    double sqrtResult = sqrt(number);
    printf("Square root of %.2f is %.2f\n", number, sqrtResult);

    // Power (number^base)
    double powerResult = pow(number, base);
    printf("%.2f raised to the power of %.2f is %.2f\n", number, base, powerResult);

    // Logarithm base 10
    double logResult = log10(number);
    printf("Log base 10 of %.2f is %.2f\n", number, logResult);

    // Logarithm natural
    double lnResult = log(number);
    printf("Natural logarithm of %.2f is %.2f\n", number, lnResult);

    // Trigonometric functions - converting degrees to radians for input
    double radians = angle * (M_PI / 180.0); // Convert angle to radians
    double sinResult = sin(radians);
    double cosResult = cos(radians);
    printf("Sine of %.2f degrees is %.2f\n", angle, sinResult);
    printf("Cosine of %.2f degrees is %.2f\n", angle, cosResult);

    // Absolute value
    double negativeNumber = -25.0;
    double absResult = fabs(negativeNumber);
    printf("Absolute value of %.2f is %.2f\n", negativeNumber, absResult);

    return 0;
}
