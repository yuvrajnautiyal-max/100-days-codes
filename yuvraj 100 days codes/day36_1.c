// Q71 (2D Arrays)
// Read and print a matrix.

#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int matrix[50][50]; // assuming max size 50x50

    scanf("%d %d", &rows, &cols);

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}