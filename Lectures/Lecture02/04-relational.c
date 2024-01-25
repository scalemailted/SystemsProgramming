#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int result;

    // Equal to
    result = (a == b);
    printf("%d == %d: %d\n", a,b,result);

    // Not equal to
    result = (a != b);
    printf("%d != %d: %d\n", a,b,result);

    // Greater than
    result = (a > b);
    printf("%d > %d: %d\n", a,b,result);

    // Less than
    result = (a < b);
    printf("%d < %d: %d\n", a,b,result);

    // Greater than or equal to
    result = (a >= b);
    printf("%d >= %d: %d\n", a,b,result);

    // Less than or equal to
    result = (a <= b);
    printf("%d <= %d: %d\n", a,b,result);

    return 0;
}
