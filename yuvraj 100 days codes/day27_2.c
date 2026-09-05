// Q54: Write a program to print the following pattern:
//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *

#include <stdio.h>

int main() {
    int n = 4, i, j;

    // upper half (including middle row)
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    // lower half
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}