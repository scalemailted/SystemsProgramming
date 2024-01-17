#include <stdio.h>
#include <math.h>

int main() {
    // Define two floats
    float a = 0.1f;
    float b = 0.8f;
    float sum = a + b;
    float c = 0.9f;
    int result;

    // Check if sum is exactly 0.9
    printf("TEST [ == operator ] with floats\n");
    result = (sum == c);
    printf("(%f == %f) returns: %d\n\n", sum, c, result);
    
    // Using an error threshold for comparison
    printf("TEST [ thresholding ] with floats\n");
    float errorThreshold = 0.0001f;
    result = fabs(sum - c) < errorThreshold;
    printf("(%f - %f) < %f returns: %d\n\n", sum, c, errorThreshold, result);

    // Define two doubles
    double x = 0.1;
    double y = 0.2;
    double z = 0.3;
    double sumDouble = x + y;

    // Check if sum is exactly 0.3
    printf("TEST [ == operator ] with doubles\n");
    result = (sumDouble == z);
    printf("(%f == %f) returns: %d\n\n", sumDouble, z, result);
    
    // Using an error threshold for comparison
    printf("TEST [ thresholding ] with doubles\n");
    double errorThresholdDouble = 0.0001;
    result = fabs(sumDouble - z) < errorThresholdDouble;
    printf("(%f - %f) < %f returns: %d\n\n", sumDouble, z, errorThresholdDouble, result);

    return 0;
}
