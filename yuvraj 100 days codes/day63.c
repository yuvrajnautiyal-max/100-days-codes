/*
 * Question 113 (Logic Enhancers)
 * 
 * Write a program to take an integer array arr and an integer k as inputs. 
 * The task is to find the kth smallest element in the array. 
 * Print the kth smallest element as output.
 */

#include <stdio.h>
#include <stdlib.h>

// Comparison function needed for the built-in qsort function.
// It tells qsort how to sort the integers in ascending order.
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n, k;

    // 1. Read the size of the array
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1; 
    }

    int arr[n];

    // 2. Read the array elements
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return 1;
        }
    }

    // 3. Read the value of k
    if (scanf("%d", &k) != 1 || k <= 0 || k > n) {
        return 1; // k must be a valid position between 1 and n
    }

    // 4. Sort the array in ascending order using standard library qsort.
    // This takes O(N log N) time complexity.
    qsort(arr, n, sizeof(int), compare);

    // 5. The kth smallest element will be at index (k - 1) in the sorted array.
    printf("%d\n", arr[k - 1]);

    return 0;
}
