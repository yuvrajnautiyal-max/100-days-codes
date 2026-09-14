// Q70 (Arrays (1D))
// Rotate an array to the right by k positions.

#include <stdio.h>

int main() {
    int n, i, k;
    int arr[100]; // assuming max size 100
    int temp[100]; // to hold rotated result

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    k = k % n; // handle k greater than n

    // place last k elements first, then remaining elements
    for (i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }

    for (i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }
    printf("\n");

    return 0;
}