#include <stdio.h>

// Define a struct for a simple coordinate
typedef struct {
    int x;
    int y;
} Point;

// Function to print a point
void printPoint(Point p) {
    printf("Point(x: %d, y: %d)\n", p.x, p.y);
}

int main() {
    // Create a point and a pointer to the point
    Point p1 = {10, 20};
    Point *pPtr = &p1;

    // Use dereference operator (*) to access members of point via pointer
    printf("Using * notation - ");
    printPoint(*pPtr);

    // Use arrow operator (->) to access members of point via pointer
    printf("Using -> notation - x: %d, y: %d\n", pPtr->x, pPtr->y);

    return 0;
}
