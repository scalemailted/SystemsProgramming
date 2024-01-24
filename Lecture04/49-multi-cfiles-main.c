#include "49-multi-cfiles.h" // Include the header file where 'bar' is declared


int main() {
    bar(); // You can now use 'bar' because you've included foo.h
    return 0;
}