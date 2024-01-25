#include <stdio.h>
#include <stdlib.h>

int main() {
    char intStr[] = "123";
    char floatStr[] = "123.45";

    int intValue = atoi(intStr);
    double floatValue = atof(floatStr);

    printf("Integer value: %d\n", intValue);
    printf("Float value: %f\n", floatValue);

    return 0;
}
