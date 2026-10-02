/*
 * Question 104 (Logic Enhancers)
 * 
 * Write a Program to take a positive integer n as input, and find the pivot integer x 
 * such that the sum of all elements between 1 and x inclusively equals the sum of 
 * all elements between x and n inclusively. Print the pivot integer x. 
 * If no such integer exists, print -1. Assume that it is guaranteed that there 
 * will be at most one pivot integer for the given input.
 */

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    long long total_sum = (long long)n * (n + 1) / 2;
    int pivot = -1;

    for (long long x = 1; x <= n; x++) {
        long long sum_left = x * (x + 1) / 2;
        long long sum_right = total_sum - (x - 1) * x / 2;
        if (sum_left == sum_right) {
            pivot = (int)x;
            break;
        }
    }

    printf("%d\n", pivot);

    return 0;
}
