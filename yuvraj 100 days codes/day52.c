// Q102 (Logic Enhancers)
// Write a Program to take a sorted array arr[] and an integer x as input,
// find the index (0-based) of the smallest element in arr[] that is
// greater than or equal to x and print it (ceil of x).
// If no such element exists, print -1.

#include <stdio.h>

int main() {
    int n, i, x;
    int arr[100]; // assuming max size 100
    int low, high, mid;
    int result = -1;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] >= x) {
            result = mid;      // possible answer, but look for a smaller index too
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    printf("%d\n", result);

    return 0;
}