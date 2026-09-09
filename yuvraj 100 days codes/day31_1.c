// Q61 (Arrays (1D))
// Search for an element in an array using linear search.

#include <stdio.h>

int main() {
    int n, i, key, index = -1;
    int arr[100]; // assuming max size 100

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        printf("Found at index %d\n", index);
    } else {
        printf("-1\n");
    }

    return 0;
}