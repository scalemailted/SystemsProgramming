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
#include <stdlib.h> // Required for malloc and free

int main() {
    // Dynamically allocate memory for an integer on the heap
    int *ptr = (int*)malloc(sizeof(int));

    // Check if memory allocation was successful
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit with an error code
    }
    
    
    // Store a value in the allocated memory
    *ptr = 10;
    printf("Value in the allocated memory: %d\n", *ptr);

    // Free the allocated memory
    free(ptr);
    ptr = NULL; // Good practice to set pointer to NULL after freeing

    return 0;
}
