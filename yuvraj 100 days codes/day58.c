/*
 * Question 108 (Logic Enhancers)
 * 
 * Write a Program to take an integer array nums. Print an array answer such that 
 * answer[i] is equal to the product of all the elements of nums except nums[i]. 
 * The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
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

    int left[n], right[n], answer[n];

    left[0] = 1;
    for (int i = 1; i < n; i++) {
        left[i] = left[i - 1] * nums[i - 1];
    }

    right[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--) {
        right[i] = right[i + 1] * nums[i + 1];
    }

    for (int i = 0; i < n; i++) {
        answer[i] = left[i] * right[i];
    }

    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i < n - 1) {
            printf(",");
        }
    }
    printf("]\n");

    return 0;
}
