/*
 * Question 119 (Logic Enhancers)
 * 
 * Write a program to take an integer array as input. Only one element 
 * will be repeated. Print the repeated element. Try to find the result 
 * in one single iteration.
 */
#include <stdio.h>
#include <stdlib.h>
#define MAX_VAL 100005
int visited[MAX_VAL] = {0};
int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }
    int arr[n];
    int repeated_element = -1;
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return 1;
        }

        if (repeated_element == -1) {
            if (arr[i] >= 0 && arr[i] < MAX_VAL) {
                if (visited[arr[i]] == 1) {
                    // We found our duplicate! Record it.
                    repeated_element = arr[i];
                } else {
                    visited[arr[i]] = 1;
                }
            }
        }
    }
    if (repeated_element != -1) {
        printf("%d\n", repeated_element);
    } else {
        printf("No repeated element found\n");
    }
    return 0;
}