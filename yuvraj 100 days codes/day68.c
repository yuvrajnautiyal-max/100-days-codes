// Q118 (Logic Enhancers)
// Take an array of size n containing all integers from 0 to n except one.
// Print the missing number.

#include <stdio.h>

int main() {
    int n, i, num;
    int expectedSum, actualSum = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        actualSum = actualSum + num;
    }

    expectedSum = n * (n + 1) / 2; // sum of 0 to n

    printf("%d\n", expectedSum - actualSum);

    return 0;
}