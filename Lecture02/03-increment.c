#include <stdio.h>

int main() {
    int a = 5;
    int result;

    // Pre-increment
    result = a; 
    printf("[BEFORE] value = %d\n", result);
    printf("[DURING] value = %d (Pre-increment)\n", ++result);
    printf("[AFTER ] value = %d\n\n", result);

    // Post-increment
    result = a; 
    printf("[BEFORE] value = %d\n", result);
    printf("[DURING] value = %d (Post-increment)\n", result++);
    printf("[AFTER ] value = %d\n\n", result);

    // Pre-decrement
    result = a;  
    printf("[BEFORE] value = %d\n", result);
    printf("[DURING] value = %d (Pre-decrement)\n", --result);
    printf("[AFTER ] value = %d\n\n", result);

    // Post-decrement
    result = a;  
    printf("[BEFORE] value = %d\n", result);
    printf("[DURING] value = %d (Post-decrement)\n", result--);
    printf("[AFTER ] value = %d\n\n", result);

    return 0;
}
