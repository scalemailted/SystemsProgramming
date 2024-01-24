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
#include <string.h>

int main() {
    char *dynamicString;
    int length;

    printf("Enter the maximum length of the string: ");
    scanf("%d", &length);

    // Allocate memory for the string plus the null terminator
    dynamicString = (char*)malloc((length + 1) * sizeof(char));

    // Check if memory allocation was successful
    if (dynamicString == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Read the string from the user
    printf("Enter the string: ");
    scanf("%s", dynamicString);

    printf("You entered: %s\n", dynamicString);

    // Free the allocated memory
    free(dynamicString);
    dynamicString = NULL;

    return 0;
}
