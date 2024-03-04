#include <stdio.h>
#include <limits.h>

int main() {
    // Unsigned overflow
    unsigned int u_max = UINT_MAX; // Maximum value for unsigned int
    unsigned int u_overflow = u_max + 1; // This will wrap around to 0

    printf("Maximum unsigned int: %u\n", u_max);
    printf("%u + 1: %u (positive wrap-around)\n\n", u_max, u_overflow);

    // Signed positive overflow - typically results in wrap-around but is undefined behavior
    int s_max = INT_MAX; // Maximum value for signed int
    int s_pos_overflow = s_max + 1; // This could wrap around to INT_MIN

    // Signed negative overflow - typically results in wrap-around but is undefined behavior
    int s_min = INT_MIN; // Minimum value for signed int
    int s_neg_overflow = s_min - 1; // This could wrap around to INT_MAX

    printf("Maximum signed int: %d\n", s_max);
    printf("%d + 1: %d (positive wrap-around)\n", s_max, s_pos_overflow);
    printf("Minimum signed int: %d\n", s_min);
    printf("%d - 1: %d (negative wrap-around)\n", s_min, s_neg_overflow);

    return 0;
}
