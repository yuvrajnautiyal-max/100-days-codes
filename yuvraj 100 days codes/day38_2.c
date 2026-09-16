// Q76 (2D Arrays)
// Check if a matrix is symmetric.

#include <stdio.h>

int main() {
    int n, i, j, isSymmetric = 1;
    int matrix[50][50]; // assuming max size 50x50

    scanf("%d", &n); // symmetric check needs a square matrix

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (isSymmetric == 0) {
            break;
        }
    }

    if (isSymmetric == 1) {
        printf("Symmetric\n");
    } else {
        printf("Not Symmetric\n");
    }

    return 0;
}