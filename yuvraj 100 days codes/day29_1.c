// Q57 (Arrays (1D))
// Find the sum of array elements

#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int arr[100]; // assuming max size 100

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    printf("%d\n", sum);

    return 0;
}