/*
 * Question 111 (Logic Enhancers)
 * 
 * Write a program to take an integer array arr and an integer k as inputs. 
 * The task is to find the first negative integer in each subarray of size k 
 * moving from left to right. If no negative exists in a window, print "0" 
 * for that window. Print the results separated by spaces as output.
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
        int first_neg = 0;
        for (int j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                first_neg = arr[i + j];
                break;
            }
        }
        printf("%d", first_neg);
        if (i < n - k) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
