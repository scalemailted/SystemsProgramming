#include <stdio.h>

int main() {
    int number = 15;

    // Single selection: if statement
    if (number > 10) {
        printf("Number is greater than 10.\n");
    }

    // Double selection: if-else statement
    if (number % 2 == 0) {
        printf("Number is even.\n");
    } else {
        printf("Number is odd.\n");
    }

    // Nested multi-selection: if-else if-else statement
    if (number < 10) {
        printf("Number is less than 10.\n");
    } else if (number >= 10 && number <= 20) {
        printf("Number is between 10 and 20.\n");
    } else {
        printf("Number is greater than 20.\n");
    }

    return 0;
}
