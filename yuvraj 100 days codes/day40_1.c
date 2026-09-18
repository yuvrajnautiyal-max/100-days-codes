// Q79 (2D Arrays)
// Perform diagonal traversal of a matrix.

#include <stdio.h>

int main() {
    int rows, cols, i, j, d;
    int matrix[50][50]; // assuming max size 50x50

    scanf("%d %d", &rows, &cols);

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // diagonals are groups where i + j = d (constant)
    for (d = 0; d <= rows + cols - 2; d++) {
        for (i = 0; i <= d; i++) {
            j = d - i;
            if (i < rows && j < cols) {
                printf("%d ", matrix[i][j]);
            }
        }
    }
    printf("\n");

    return 0;
}