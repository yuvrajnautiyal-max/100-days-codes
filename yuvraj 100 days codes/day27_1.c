// Q53: Write a program to print the following pattern:
// *
// ***
// *****
// *******
// *********
// *******
// *****
// ***
// *

#include <stdio.h>

int main() {
    int n = 5, i, j;

    // upper half (including middle row)
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    // lower half
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}