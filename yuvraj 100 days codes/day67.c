/*
 * Question 117 (Logic Enhancers)
 * 
 * Write a program to take two sorted arrays of size m and n as input. 
 * Merge both the arrays such that the merged array is also sorted. 
 * Print the merged array.
 */

#include <stdio.h>

int main() {
    int m;
    if (scanf("%d", &m) != 1 || m < 0) {
        return 1;
    }

    int nums1[m > 0 ? m : 1];
    for (int i = 0; i < m; i++) {
        if (scanf("%d", &nums1[i]) != 1) {
            return 1;
        }
    }

    int n;
    if (scanf("%d", &n) != 1 || n < 0) {
        return 1;
    }

    int nums2[n > 0 ? n : 1];
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums2[i]) != 1) {
            return 1;
        }
    }

    int i = 0, j = 0;
    int first = 1;

    while (i < m && j < n) {
        if (!first) printf(" ");
        first = 0;
        if (nums1[i] <= nums2[j]) {
            printf("%d", nums1[i++]);
        } else {
            printf("%d", nums2[j++]);
        }
    }

    while (i < m) {
        if (!first) printf(" ");
        first = 0;
        printf("%d", nums1[i++]);
    }

    while (j < n) {
        if (!first) printf(" ");
        first = 0;
        printf("%d", nums2[j++]);
    }

    printf("\n");

    return 0;
}
