/*
 * Question 110 (Logic Enhancers)
 * 
 * Write a program to take an integer array arr and an integer k as inputs. 
 * The task is to find the maximum element in each subarray of size k moving 
 * from left to right. Print the maximum elements for each window separated 
 * by spaces as output.
 */

#include <stdio.h>

int main() {
    int n, k;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return 1;
        }
    }

    if (scanf("%d", &k) != 1 || k <= 0 || k > n) {
        return 1;
    }

    for (int i = 0; i <= n - k; i++) {
        int window_max = arr[i];
        for (int j = 1; j < k; j++) {
            if (arr[i + j] > window_max) {
                window_max = arr[i + j];
            }
        }
        printf("%d", window_max);
        if (i < n - k) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
