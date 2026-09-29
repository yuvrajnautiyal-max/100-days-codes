/*
 * Question 101 (Logic Enhancers)
 * 
 * Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. 
 * The elements in the sorted array might be repeated. You need to print the first and 
 * last occurrence of the target and print the index of first and last occurrence. 
 * Print -1, -1 if the target is not present.
 */

#include <stdio.h>

int main() {
    int n, target;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int nums[n];
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            return 1;
        }
    }

    if (scanf("%d", &target) != 1) {
        return 1;
    }

    int first = -1, last = -1;

    // Binary search for first occurrence
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            first = mid;
            high = mid - 1; // look on left side
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // Binary search for last occurrence
    low = 0;
    high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            last = mid;
            low = mid + 1; // look on right side
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    printf("%d,%d\n", first, last);

    return 0;
}
