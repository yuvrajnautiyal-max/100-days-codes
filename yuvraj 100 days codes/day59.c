/*
 * Question 109 (Logic Enhancers)
 * 
 * Write a program to take an integer array arr and an integer k as inputs. 
 * Print the maximum sum of all the subarrays of size k.
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

    long long current_sum = 0;
    for (int i = 0; i < k; i++) {
        current_sum += arr[i];
    }

    long long max_sum = current_sum;

    for (int i = k; i < n; i++) {
        current_sum += arr[i] - arr[i - k];
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    printf("%lld\n", max_sum);

    return 0;
}
