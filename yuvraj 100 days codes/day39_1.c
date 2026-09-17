// Q77 (2D Arrays)
// Check if the elements on the diagonal of a matrix are distinct

#include <stdio.h>

int main() {
    int n, i, j, isDistinct = 1;
    int matrix[50][50]; // assuming max size 50x50
    int diagonal[50];   // to store diagonal elements

    scanf("%d", &n); // diagonal exists in a square matrix

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // store the main diagonal elements
    for (i = 0; i < n; i++) {
        diagonal[i] = matrix[i][i];
    }

    // compare every pair of diagonal elements
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (diagonal[i] == diagonal[j]) {
                isDistinct = 0;
                break;
            }
        }
        if (isDistinct == 0) {
            break;
        }
    }

    if (isDistinct == 1) {
        printf("Distinct\n");
    } else {
        printf("Not Distinct\n");
    }

    return 0;
}