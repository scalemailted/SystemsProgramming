#include <stdio.h>

int main() {
    int number = 3;

    // Using switch statement
    printf("Using switch statement:\n");
    switch (number) {
        case 1:
            printf("Number is one.\n");
            break;
        case 2:
            printf("Number is two.\n");
            break;
        case 3:
            printf("Number is three.\n");
            break;
        default:
            printf("Number is something else.\n");
    }

    // Divider
    printf("\n");

    // Using nested if-else if-else
    printf("Using nested if-else if-else:\n");
    if (number == 1) {
        printf("Number is one.\n");
    } else if (number == 2) {
        printf("Number is two.\n");
    } else if (number == 3) {
        printf("Number is three.\n");
    } else {
        printf("Number is something else.\n");
    }

    return 0;
}
