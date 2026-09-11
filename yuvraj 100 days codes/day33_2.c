// Q66 (Arrays (1D))
// Insert an element in a sorted array at the appropriate position

#include <stdio.h>

int main() {
    int n, i, j, key;
    int arr[101]; // assuming max size 100, +1 for inserted element

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    // find the position where key should be inserted
    i = n - 1;
    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i]; // shift element to the right
        i--;
    }

    arr[i + 1] = key; // insert key at correct position
    n++; // array size increases by 1

    for (j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}