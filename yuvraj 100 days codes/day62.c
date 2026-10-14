/*
 * Question 112 (Logic Enhancers)
 * 
 * Write a program to take an integer array arr as input. The task is to find the 
 * maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum 
 * sum as output. If all elements are negative, print the largest (least negative) element.
 */

#include <stdio.h>
#include <limits.h>

int main() {
    int n;

    // Read the size of the array
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1; 
    }

    int arr[n];

    // Read array elements
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return 1;
        }
    }

    // Kadane's Algorithm Initialization
    int max_so_far = arr[0];
    int current_max = arr[0];

    // Traverse the array starting from the second element
    for (int i = 1; i < n; i++) {
        // Decide whether to add the current element to the existing subarray 
        // or start a new subarray from the current element
        if (arr[i] > current_max + arr[i]) {
            current_max = arr[i];
        } else {
            current_max = current_max + arr[i];
        }

        // Update the global maximum sum found so far
        if (current_max > max_so_far) {
            max_so_far = current_max;
        }
    }

    // Print the final maximum contiguous subarray sum
    printf("%d\n", max_so_far);

    return 0;
}
