// Q62 (Arrays (1D))
// Reverse an array without taking extra space.

#include <stdio.h>

int main() {
    int n, i, start, end, temp;
    int arr[100]; // assuming max size 100

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    start = 0;
    end = n - 1;

    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}