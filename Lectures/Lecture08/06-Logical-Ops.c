#include <stdio.h>

int main() {
    
   char binary0x41 = 0x41; 
   char binary0x00 = 0x00; 
   char binary0x99 = 0x99;
   char binary0x55 = 0x55;

    // Logical NOT on 0x41
    printf("!0x41 results in %d\n", !binary0x41);

    // Logical NOT on 0x00
    printf("!0x00 results in %d\n", !binary0x00);

    // Double logical NOT on 0x41
    printf("!!0x41 results in %d\n", !!binary0x00);

    // Logical AND on 0x69 and 0x55
    printf("0x69 && 0x55 results in %d\n", binary0x99 && binary0x55);

    // Logical OR on 0x69 and 0x55
    printf("0x69 || 0x55 results in %d\n", binary0x99 || binary0x55);

    return 0;
}
