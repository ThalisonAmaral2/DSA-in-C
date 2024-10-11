#include <stdio.h>
#include "matrix.h"

void matrix_add(int a[][MAX_COL], int b[][MAX_COL], int c[][MAX_COL], int rows, int cols) {
    int i, j;

    // Check for valid dimensions
    if (rows > MAX_COL || cols > MAX_COL) {
        printf("Error: Matrix dimensions exceed maximum allowed (%dx%d).\n", MAX_COL, MAX_COL);
        return;
    }

    // Adding matrices
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    // Print the result matrix
    printf("Result Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}
