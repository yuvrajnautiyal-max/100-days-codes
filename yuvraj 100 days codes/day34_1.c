// Q67 (Arrays (1D))
// Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int n, i, pos, value;
    int arr[101]; // assuming max size 100, +1 for inserted element

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &pos, &value);

    // shift elements from the end up to pos, one position right
    for (i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }

    arr[pos] = value; // insert value at given position
    n++; // array size increases by 1

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}