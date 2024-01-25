/*
 In C, a static function has file scope, meaning it can only be called from the same source code file. 
 This is a way to implement encapsulation in C, providing a form of information hiding at the file level.

 Non-static functions, on the other hand, have external linkage by default, 
 which means they are visible to other source files. 
*/

#include <stdio.h>

// Prototype for non-static function
void nonStaticFunction();

// Static function declaration
static void staticFunction() {
    printf("Inside static function\n");
}

int main() {
    printf("Calling non-static function:\n");
    nonStaticFunction();

    printf("\nCalling static function:\n");
    staticFunction();

    return 0;
}

// Non-static function definition
void nonStaticFunction() {
    printf("Inside non-static function\n");
}

