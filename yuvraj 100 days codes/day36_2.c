// Q72 (2D Arrays)
// Find the sum of all elements in a matrix.

#include <stdio.h>

int main() {
    int rows, cols, i, j, sum = 0;
    int matrix[50][50]; // assuming max size 50x50

    scanf("%d %d", &rows, &cols);

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum = sum + matrix[i][j];
        }
    }

    printf("%d\n", sum);

    return 0;
}