#include <stdio.h>

#define SIZE 10

int main() {
    int board[SIZE][SIZE];

    // Initialize the 10x10 board
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            board[i][j] = i * SIZE + j;
        }
    }

    // Efficient iteration (rightmost index varies the most frequently)
    printf("Efficient Iteration:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%3d ", board[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // Inefficient iteration (leftmost index varies the most frequently)
    printf("Inefficient Iteration:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%3d ", board[j][i]);
        }
        printf("\n");
    }

    return 0;
}
