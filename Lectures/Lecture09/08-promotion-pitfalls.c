#include <stdio.h>

int main() {
    // Expression 0 == 0U
    printf("0 == 0U evaluates to %d\n", 0 == 0U);

    // Expression -1 < 0
    printf("-1 < 0 evaluates to %d\n", -1 < 0);

    // Expression -1 < 0U
    printf("-1 < 0U evaluates to %d\n", -1 < 0U);

    // Expression 2147483647 > -2147483647 - 1
    printf("2147483647 > -2147483647 - 1 evaluates to %d\n", 2147483647 > -2147483647 - 1);

    // Expression 2147483647U > -2147483647 - 1
    printf("2147483647U > -2147483647 - 1 evaluates to %d\n", 2147483647U > -2147483647 - 1);

    // Expression 2147483647 > (int) 2147483648U
    printf("2147483647 > (int) 2147483648U evaluates to %d\n", 2147483647 > (int) 2147483648U);

    // Expression -1 > -2
    printf("-1 > -2 evaluates to %d\n", -1 > -2);

    // Expression (unsigned) -1 > -2
    printf("(unsigned) -1 > -2 evaluates to %d\n", (unsigned) -1 > -2);

    return 0;
}
