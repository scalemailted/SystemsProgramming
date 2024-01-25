#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello World";
    char *substr = strstr(str, "World");

    if (substr != NULL) {
        printf("Found substring: %s\n", substr);
    }

    return 0;
}
