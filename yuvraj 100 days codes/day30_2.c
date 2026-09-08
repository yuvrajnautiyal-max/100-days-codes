// Q60 (Arrays (1D))
// Count positive, negative, and zero elements in an array

#include <stdio.h>

int main() {
    int n, i;
    int arr[100]; // assuming max size 100
    int positive = 0, negative = 0, zero = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positive++;
        } else if (arr[i] < 0) {
            negative++;
        } else {
            zero++;
        }
    }

    printf("Positive=%d, Negative=%d, Zero=%d\n", positive, negative, zero);

    return 0;
}