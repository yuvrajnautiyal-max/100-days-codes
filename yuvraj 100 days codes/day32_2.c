// Q64 (Arrays (1D))
// Find the digit that occurs the most times in an integer number

#include <stdio.h>

int main() {
    long long n;
    int count[10] = {0}; // to store frequency of digits 0-9
    int digit, i, maxCount, maxDigit;

    scanf("%lld", &n);

    if (n < 0) {
        n = -n; // handle negative numbers
    }

    if (n == 0) {
        count[0]++;
    }

    while (n > 0) {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    maxCount = 0;
    maxDigit = 0;

    for (i = 0; i <= 9; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("%d\n", maxDigit);

    return 0;
}