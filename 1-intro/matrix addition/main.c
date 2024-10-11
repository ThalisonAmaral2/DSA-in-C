#include <stdio.h>
#define NO_COLS 3
#define NO_ROWS 3

#include "matrix.h"

int main() {
    int a[NO_ROWS][10] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int b[NO_ROWS][10] = {
        {8, 7, 6},
        {5, 4, 3},
        {2, 1, 0}
    };
    int c[NO_ROWS][10]; // Keep this the same

    matrix_add(a, b, c, NO_ROWS, NO_COLS); // Call the matrix addition function

    return 0; // Return 0 to indicate successful execution
}
