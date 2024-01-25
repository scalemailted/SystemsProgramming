#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Pointer to the first element of the array

    printf("Using array notation:\n");
    for (int index = 0; index < 5; index++) {
        int element = arr[index];
        printf("arr[%d] = %d\n", index, element);
    }

    printf("\nUsing pointer notation:\n");
    for (int index = 0; index < 5; index++) {
        int element = *(ptr + index);
        printf("*(ptr + %d) = %d\n", index, element);
    }

    // Demonstrating that both notations can be used to modify array elements
    arr[2] = 60;       // Using array notation to modify the third element
    *(ptr + 3) = 80;   // Using pointer notation to modify the fourth element

    printf("\nArray after modification:\n");
    for (int index = 0; index < 5; index++) {
        int element = arr[index];
        printf("arr[%d] = %d\n", index, element);
    }

    return 0;
}
