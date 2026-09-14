// Q69 (Arrays (1D))
// Find the second largest element in an array.

#include <stdio.h>

int main() {
    int n, i;
    int arr[100]; // assuming max size 100
    int largest, secondLargest;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = secondLargest = -2147483648; // smallest possible int

    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    printf("%d\n", secondLargest);

    return 0;
}