// Q78 (2D Arrays)
// Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main() {
    int n, i, j, sum = 0;
    int matrix[50][50]; // assuming max size 50x50

    scanf("%d", &n); // diagonal exists in a square matrix

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        sum = sum + matrix[i][i];
    }

    printf("%d\n", sum);

    return 0;
}