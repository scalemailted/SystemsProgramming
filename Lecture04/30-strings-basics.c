#include <stdio.h>

int main() {
    char string[1000] = "binky";    //char array - String initialization
    char* string2 = "Hello World";  //char pointer

    printf("String: %s\n", string);
    printf("String: %s\n", string2);

    // Overwrite string variable using array notation
    string[0] = 'f';
    string[1] = 'o';
    string[2] = 'o';
    string[3] = '\0'; // Null-terminator to mark the end of the string

    // Reassign string2 pointer to a different string literal
    string2 = "Ted was here and left this long message";

    printf("String: %s\n", string);
    printf("String: %s\n", string2);

    return 0;
}
