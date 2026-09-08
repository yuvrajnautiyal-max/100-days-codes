// Q59 (Arrays (1D))
// Count even and odd numbers in an array

#include <stdio.h>

int main() {
    int n, i;
    int arr[100]; // assuming max size 100
    int even = 0, odd = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("Even=%d, Odd=%d\n", even, odd);

    return 0;
}