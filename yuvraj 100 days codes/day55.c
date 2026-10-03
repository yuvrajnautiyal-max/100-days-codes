/*
 * Question 105 (Logic Enhancers)
 * 
 * Write a program to take an integer array nums of size n, and print the majority element. 
 * The majority element is the element that appears strictly more than [n / 2] times. 
 * Print -1 if no such element exists. Note: Majority Element is not necessarily 
 * the element that is present most number of times.
 */

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int nums[n];
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            return 1;
        }
    }

    // Boyer-Moore Voting Algorithm
    int candidate = nums[0];
    int count = 1;
    for (int i = 1; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Verification step
    int actual_count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            actual_count++;
        }
    }

    if (actual_count > n / 2) {
        printf("%d\n", candidate);
    } else {
        printf("-1\n");
    }

    return 0;
}
