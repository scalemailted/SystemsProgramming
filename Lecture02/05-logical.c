#include <stdio.h>

int main() {
    int a = 1;  // True
    int b = 0;  // False
    int result;

    // Logical AND
    result = a && b;
    printf("%d && %d = %d (Logical AND)\n", a,b,result);

    // Logical OR
    result = a || b;
    printf("%d || %d = %d (Logical OR)\n", a,b,result);

    // Logical NOT
    result = !a;
    printf("!%d = %d (Logical NOT on a)\n", a, result);

    result = !b;
    printf("!%d = %d (Logical NOT on b)\n", b, result);


    return 0;
}
