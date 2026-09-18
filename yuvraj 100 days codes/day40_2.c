// Q80 (2D Arrays)
// Multiply two matrices

#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;
    int a[50][50], b[50][50], result[50][50]; // assuming max size 50x50

    scanf("%d %d", &r1, &c1);
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    scanf("%d %d", &r2, &c2);
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // multiplication is only valid if columns of a == rows of b
    if (c1 != r2) {
        printf("Matrix multiplication not possible\n");
        return 0;
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (k = 0; k < c1; k++) {
                result[i][j] = result[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}