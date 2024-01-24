#include <stdio.h>
#include <string.h>

int main() {
    char stringValue[10]; // Smaller buffer size for demonstration

    // Dangerous way: Get a string input from the user using scanf without a limit
    printf("Enter a short string (DANGEROUS): ");
    scanf("%s", stringValue); // No limit specified, potentially dangerous
    // Print the string to verify the input 
    // (Note: does not support multiple words)
    printf("String (DANGEROUS): %s\n", stringValue);

    // Clear the input buffer
    while (getchar() != '\n');


    // Safer way: Limiting input size with scanf
    printf("Enter a short string (Safer with scanf): ");
    scanf("%9s", stringValue); // Limit the input to 9 characters
    // Print the string to verify the input 
    // (Note: does not support multiple words)
    printf("String (Safer with scanf): %s\n", stringValue);

    // Clear the input buffer
    while (getchar() != '\n');

    // Safest way: Get a string input from the user using fgets
    printf("Enter a string (Safest with fgets): ");
    fgets(stringValue, sizeof(stringValue), stdin);
    // Remove the newline character at the end of the string
    stringValue[strcspn(stringValue, "\n")] = 0;
    // Print the string to verify the input
    // (Note: DOES support multiple words)
    printf("String (Safest with fgets): %s\n", stringValue);

    return 0;
}
