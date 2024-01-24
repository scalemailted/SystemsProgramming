/*
Why malloc is Safer than Statically Allocated Arrays or Overwriting String Literals
1. Flexibility:
    malloc allows for allocation of the exact amount of memory needed at runtime. 
    This is especially useful for strings where the length might vary significantly 
    and is not known in advance.

2. Avoiding Buffer Overflows: 
    With statically allocated arrays, 
    there is a risk of buffer overflow if the input exceeds the array size. 
    malloc can prevent this by allocating enough memory to handle the expected input size.

3. Immutability of String Literals: 
    In C, string literals are immutable. 
    Overwriting a char* that points to a string literal can lead to undefined behavior. 
    Dynamically allocated strings do not have this issue, as the memory can be freely modified.

4. Efficient Memory Usage: 
    By allocating only the memory needed, 
    malloc can lead to more efficient memory usage, 
    especially in cases where the maximum string size is larger than the typical string length.

5. Lifetime Control: 
    Memory allocated with malloc persists until it is explicitly freed, 
    giving control over its lifetime. 
    This is useful where the string needs to exists beyond the scope where it was created.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;
    int numberOfElements;

    printf("Enter the number of elements: ");
    scanf("%d", &numberOfElements);

    // Allocate memory for the array
    array = (int*)malloc(numberOfElements * sizeof(int));

    // Check if memory allocation was successful
    if (array == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit with an error code
    }

    // Read elements from the user
    printf("Enter %d integers:\n", numberOfElements);
    for (int i = 0; i < numberOfElements; i++) {
        scanf("%d", &array[i]);
    }

    // Print the elements
    printf("You entered: ");
    for (int i = 0; i < numberOfElements; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(array);
    array = NULL;

    return 0;
}
