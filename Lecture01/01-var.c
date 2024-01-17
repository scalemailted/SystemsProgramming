#include <stdio.h>
#include <stdbool.h>

int main() {
    // Integer data type
    int myInt = 100;
    printf("Integer: %d\n", myInt);

    // Character data type
    char myChar = 'A';
    printf("Character: %c\n", myChar);

    // char data type
    char myCharNum = 65;
    printf("Character: %c\n", myCharNum);

    // Floating point data type
    float myFloat = 10.5f;
    printf("Float: %f\n", myFloat);

    // Double floating point data type
    double myDouble = 20.99;
    printf("Double: %lf\n", myDouble);

    // Boolean data type (included from stdbool.h)
    bool myBool = true;
    printf("Boolean: %d\n", myBool);

    // String (character array)
    char myString[] = "Hello, World!";
    printf("String: %s\n", myString);

    // Pointer to char (string)
    char* myCharPointer = "Hello, Pointer!";
    printf("Char Pointer (String): %s\n", myCharPointer);

    // Long int data type
    long myLong = 123456789;
    printf("Long Integer: %ld\n", myLong);

    // Short int data type
    short myShort = 12345;
    printf("Short Integer: %hd\n", myShort);

    // Unsigned int data type
    unsigned int myUnsignedInt = 300;
    printf("Unsigned Integer: %u\n", myUnsignedInt);

    // Long long int data type
    long long myLongLong = 123456789012345;
    printf("Long Long Integer: %lld\n", myLongLong);



    return 0;
}
