// Q56 (Arrays (1D))
// Read and print elements of a one-dimensional array.

#include <stdio.h>

int main() {
    int n, i;
    int arr[100]; // assuming max size 100

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}