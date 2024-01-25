// pointer_to_pointer.c
#include <stdio.h>

int main() {
    int value = 5;
    int *ptr = &value;
    int **ptrToPtr = &ptr;

    printf("Value: %d\n", value);
    printf("Value via pointer: %d\n", *ptr);
    printf("Value via pointer to pointer: %d\n", **ptrToPtr);

    return 0;
}
