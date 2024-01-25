#include <stdio.h>

// Function declaration
int add(int num1, int num2);

int main() {
    int a = 5, b = 10;
    int sum;

    // Calling the function and storing the return value
    sum = add(a, b);

    printf("The sum of %d and %d is %d\n", a, b, sum);

    return 0;
}

// Function definition
int add(int num1, int num2) {
    return num1 + num2; // Return the sum of num1 and num2
}
