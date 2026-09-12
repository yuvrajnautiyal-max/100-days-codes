// Q68 (Arrays (1D))
// Delete an element from an array

#include <stdio.h>

int main() {
    int n, i, pos;
    int arr[100]; // assuming max size 100

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &pos);

    // shift elements after pos one position to the left
    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--; // array size decreases by 1

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}