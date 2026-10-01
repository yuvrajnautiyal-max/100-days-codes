// Q103 (Logic Enhancers)
// Find the pivot index of an array: where the sum of elements strictly
// to the left equals the sum of elements strictly to the right.
// Print the leftmost such index, or -1 if none exists.

#include <stdio.h>

int main() {
    int n, i;
    int arr[100]; // assuming max size 100
    int totalSum = 0, leftSum = 0, rightSum;
    int pivot = -1;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // calculate total sum of array
    for (i = 0; i < n; i++) {
        totalSum = totalSum + arr[i];
    }

    leftSum = 0;

    for (i = 0; i < n; i++) {
        rightSum = totalSum - leftSum - arr[i]; // everything except leftSum and current element

        if (leftSum == rightSum) {
            pivot = i;
            break;
        }

        leftSum = leftSum + arr[i]; // update leftSum for next index
    }

    printf("%d\n", pivot);

    return 0;
}