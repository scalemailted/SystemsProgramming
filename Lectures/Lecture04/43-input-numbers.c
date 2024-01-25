#include <stdio.h>

int main() {
    int intValue;
    float floatValue;
    char stringValue[100]; // Buffer for the string

    // Get an integer input from the user
    printf("Enter an integer: ");
    scanf("%d", &intValue);

    // Get a float input from the user
    printf("Enter a float: ");
    scanf("%f", &floatValue);

    // Clear the input buffer
    while (getchar() != '\n');

    // Print the values to verify the input
    printf("Integer: %d\n", intValue);
    printf("Float: %f\n", floatValue);

    return 0;
}
