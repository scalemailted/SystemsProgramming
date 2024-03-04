#include <stdio.h>
#include <limits.h>

int main() {
    // char
    printf("Signed char min: %d, hex: %#x\n", SCHAR_MIN, SCHAR_MIN);
    printf("Signed char max: %d, hex: %#x\n", SCHAR_MAX, SCHAR_MAX);
    printf("Unsigned char max: %u, hex: %#x\n\n", UCHAR_MAX, UCHAR_MAX);

    // short
    printf("Signed short min: %d, hex: %#x\n", SHRT_MIN, SHRT_MIN);
    printf("Signed short max: %d, hex: %#x\n", SHRT_MAX, SHRT_MAX);
    printf("Unsigned short max: %u, hex: %#x\n\n", USHRT_MAX, USHRT_MAX);

    // int
    printf("Signed int min: %d, hex: %#x\n", INT_MIN, INT_MIN);
    printf("Signed int max: %d, hex: %#x\n", INT_MAX, INT_MAX);
    printf("Unsigned int max: %u, hex: %#x\n\n", UINT_MAX, UINT_MAX);

    // long
    printf("Signed long min: %ld, hex: %#lx\n", LONG_MIN, LONG_MIN);
    printf("Signed long max: %ld, hex: %#lx\n", LONG_MAX, LONG_MAX);
    printf("Unsigned long max: %lu, hex: %#lx\n\n", ULONG_MAX, ULONG_MAX);

    // long long (for completeness)
    printf("Signed long long min: %lld, hex: %#llx\n", LLONG_MIN, LLONG_MIN);
    printf("Signed long long max: %lld, hex: %#llx\n", LLONG_MAX, LLONG_MAX);
    printf("Unsigned long long max: %llu, hex: %#llx\n", ULLONG_MAX, ULLONG_MAX);

    return 0;
}
